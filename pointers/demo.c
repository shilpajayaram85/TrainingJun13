#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*ptr)[3]; // Pointer to an array of 3 integers

    ptr = arr; // Pointing to the first 1D array in arr

    // Accessing elements using ptr
    printf("First row, first element: %d\n", (*ptr)[0]);
    printf("Second row, second element: %d\n", (*ptr)[1]);
    printf("Thirs row, third element: %d\n", (*ptr)[2]);

    ptr++; // Move the pointer to the next array of 3 integers

    // Accessing elements using ptr
    printf("Second row, first element: %d\n", (*ptr)[0]);
    printf("Second row, second element: %d\n", (*ptr)[1]);
    printf("Second row, third element: %d\n", (*ptr)[2]);

    return 0;
}

