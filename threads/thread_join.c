#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include<unistd.h>

#define NUM_THREADS 3

void* worker(void* arg) {
    int thread_id = *(int*)arg;
    printf("Thread %d is running\n", thread_id);
    sleep(1); // Simulate some work
    printf("Thread %d is done\n", thread_id);
    free(arg);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        int* thread_id = malloc(sizeof(int));
       *thread_id = i;
        if (pthread_create(&threads[i], NULL, worker, thread_id)!= 0) {
            perror("Failed to create thread");
            return 1;
        }
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Failed to join thread");
            return 1;
        }
    }

    printf("All threads have finished\n");
    return 0;
}

