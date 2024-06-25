#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "This is a long string that exceeds the limit";
    char dest[20];

    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0'; // Ensure null termination

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

