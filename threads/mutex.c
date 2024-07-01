#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t lock;

void *increment_counter(void *arg) {
    printf("Thread started\n");
	pthread_mutex_lock(&lock);

    // Critical section starts
    int i;
    for (i = 0; i < 1000000; i++) {
        counter++;
    }
    // Critical section ends

    pthread_mutex_unlock(&lock);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Initialize the mutex
    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("Mutex init failed\n");
        return 1;
    }

    // Create threads
    pthread_create(&thread1, NULL, increment_counter, NULL);
    pthread_create(&thread2, NULL, increment_counter, NULL);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&lock);

    printf("Final counter value: %d\n", counter);

    return 0;
}

