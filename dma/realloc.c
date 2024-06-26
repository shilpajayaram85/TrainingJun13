
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Allocate memory for 10 integers
    int *ptr = (int *) malloc(10 * sizeof(int));
    
   for (int i = 9; i < 10; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
        printf("%u ", ptr+i);
	
	// Reallocate memory for 15 integers
    ptr = (int *) realloc(ptr, 15 * sizeof(int));
   
   for (int i = 9; i < 15; i++) {
        ptr[i] = i + 1;
    }
    printf("\n\n"); 
    for (int i = 0; i < 15; i++)
        printf("%u ", ptr+i);
	printf("\n\n");
    for (int i = 0; i < 15; i++)
        printf("%d ", ptr[i]);

	free(ptr);
	ptr=NULL;
	return 0;
}
