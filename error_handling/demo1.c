#include <errno.h> 
#include <stdio.h> 
#include <string.h>

int main() 
{ 
	FILE* fp; 

	fp = fopen("error.txt", "r"); 

	 printf("Value of errno: %d\n", errno); 
	 perror("Message from perror"); 
	 printf("The error message is : %s\n", strerror(errno));
	return 0; 
}

