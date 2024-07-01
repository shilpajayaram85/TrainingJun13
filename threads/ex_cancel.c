#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* thread_function(void* arg) {
     pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	//pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL); // Set asynchronous cancellation type
   
   pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL);
    int i = 0; 
    // Perform thread work
    while (1) {
        printf("Thread running...%d\n", i);
		i++;
        sleep(1);
    }
    
    return NULL;
}

int main() {
    pthread_t thread;
    
    pthread_create(&thread, NULL, thread_function, NULL);
    
    // Wait a bit and then cancel the thread
    //sleep(1);
    pthread_cancel(thread);
    
    pthread_join(thread, NULL);
    
    printf("Thread canceled and joined.\n");

    return 0;
}

