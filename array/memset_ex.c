#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array of 10 integers
    int array[10];

    // Initialize all elements of the array to -1
     memset(array, -1, 8);

    // Print the array elements
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

