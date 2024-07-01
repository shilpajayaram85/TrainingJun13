#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include<string.h>

// Function to be executed by the thread
void *print_message(void *ptr) {
    char *message = (char *)ptr;
    printf("%s\n", message);

	
    char* return_message = malloc(20*sizeof(char));  // Allocate memory for the return message
    strncpy(return_message, "Exiting from threas", 19);  // Copy the message to the allocated memory

    return NULL;  // Exit the thread and return the messag
}

int main() {
    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
	void *ret_val1,*ret_val2;
    // Create threads
    pthread_create(&thread1, NULL, print_message, NULL);
    pthread_create(&thread2, NULL, print_message, NULL);
	//
	////
	///


	

    // Wait for threads to finish
    pthread_join(thread1, NULL);
//	printf("Thread returned: %s\n", (char*)ret_val1);
    
  //  free(ret_val1);

    pthread_join(thread2, NULL);
  	//printf("Thread returned: %s\n", (char*)ret_val2);
    //free(ret_val2);

//pthread_exit(NULL);

    return 0;
}

