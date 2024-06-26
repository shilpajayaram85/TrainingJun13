#include <stdio.h>

int main() {
    char msg[][5] = {"AB", "CD", "EF"}; 
    char (*ptr2)[2]; 

    ptr2 = msg;

    printf("First row: %s\n", ptr2[0]); // Accessing the first row
    printf("Second row: %s\n", ptr2[1]); // Accessing the second row
	printf("Third row: %s\n", ptr2[2]);
    return 0;
}

