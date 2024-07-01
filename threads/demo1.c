#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function to be executed by the thread
void *print_message(void *ptr) {
    char *message = (char *)ptr;
    printf("%s\n", message);
	return NULL;
}

int main() {
    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
	void *retval = malloc(100*sizeof(char));
    // Create threads
    pthread_create(&thread1, NULL, print_message, (void *)message1);
    pthread_create(&thread2, NULL, print_message, (void *)message2);
	//
	////
	///


	

    // Wait for threads to finish
   // pthread_join(thread1, retval);
    //pthread_join(thread2, NULL);

//pthread_exit(NULL);

    return 0;
}

