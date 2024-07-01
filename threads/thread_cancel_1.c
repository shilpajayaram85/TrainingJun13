/******************************************************************************
Demo code for pthread cancel (asynchronous and deferred) along with cleanup handler
*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

//thread proc function
void *thread_proc(void *args)
{
    
    
    int rc = -1;
    int i = 0;
    int j = 0; 
    int oldstate = 0;
    int oldtype = 0; 
  
    rc = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, &oldstate);
    if (rc == 0)
    {
        
       rc = pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, &oldtype);// cancellation deferred till next 
            //call to cancellation checkpoint
          //  rc = pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, &oldtype);
        
    }
    sleep(4);

    for (i = 0;i >= 0; i++ )
    {
        printf("\n %d", i);
       // for (j = 0; j < 0xFFFFFFFFFFF; j++); //delay
      sleep(1);
        if (i == 50)
        {
            break;
        }
            
    }
    printf("\n to exit child");

    pthread_exit(NULL);
}



int main()
{
    pthread_t tid;
    int oldstate = -1;
    int oldtype = -1;
    int *status = NULL;
    
    int rc = pthread_create(&tid, NULL, thread_proc, NULL);
    //TBD handle err;
    sleep(4);
    printf("\n To cancel child thread");
    rc = pthread_cancel(tid);
    if (rc == 0)
    {
        printf("\n Thread cancelled successfully");
        
    }
    else
    {
        printf("\n thread cancel failed with err:%d", rc);
    }
    
    rc = pthread_join(tid, (void**)&status);
    
    if (status == PTHREAD_CANCELED)
    {
        printf("\n Thread cancelled successfully");
    }
    return 0;
}




