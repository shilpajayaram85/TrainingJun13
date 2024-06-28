#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int c;

    // Attempt to open a file for reading
    file = fopen("example.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read characters until end of file is reached
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    // Check for errors
    if (ferror(file)) {
        printf("\nError reading from file.\n");
    } else {
        printf("\nEnd of file reached successfully.\n");
    }

    // Clear the error and try another erroneous operation
    clearerr(file);

    // Attempt to write to a file opened in read mode (this should cause an error)
    fputc('A', file);

    // Check for errors again
    if (ferror(file)) {
        printf("Error writing to file (expected).\n");
    }

    // Clear the error and check again
    clearerr(file);
    if (ferror(file)) {
        printf("Error still present after clearerr (unexpected).\n");
    } else {
        printf("Error cleared successfully.\n");
    }

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}

