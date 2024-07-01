#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h> // for usleep

// Shared data
int shared_variable = 0;
pthread_mutex_t mutex; // Mutex declaration

// Thread function for reading
void* reader_thread(void* arg) {
    int thread_id = *((int*)arg);
    int read_value;

    while (1) {
        //pthread_mutex_lock(&mutex); // Acquire the mutex before reading
        read_value = shared_variable;
        //pthread_mutex_unlock(&mutex); // Release the mutex after reading

        printf("Reader Thread %d: Read shared_variable as %d\n", thread_id, read_value);
        usleep(500000); // Sleep for 500ms
    }

    pthread_exit(NULL);
}

// Thread function for updating
void* updater_thread(void* arg) {
    int thread_id = *((int*)arg);
    int update_value = 1;

    while (1) {
        //pthread_mutex_lock(&mutex); // Acquire the mutex before updating
        shared_variable += update_value;
        printf("Updater Thread %d: Updated shared_variable to %d\n", thread_id, shared_variable);
       //pthread_mutex_unlock(&mutex); // Release the mutex after updating

        usleep(1000000); // Sleep for 1000ms
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t reader_tid, updater_tid;
    int reader_id = 1, updater_id = 1;

    // Initialize the mutex
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        fprintf(stderr, "Error initializing mutex\n");
        return 1;
    }

    // Create threads
    if (pthread_create(&reader_tid, NULL, reader_thread, (void*)&reader_id) != 0) {
        fprintf(stderr, "Error creating reader thread\n");
        return 1;
    }
    if (pthread_create(&updater_tid, NULL, updater_thread, (void*)&updater_id) != 0) {
        fprintf(stderr, "Error creating updater thread\n");
        return 1;
    }

    // Join threads (not necessary in an infinite loop scenario)
    pthread_join(reader_tid, NULL);
    pthread_join(updater_tid, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}

