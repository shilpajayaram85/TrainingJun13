#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Copy this string";
    char dest[5];

    strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

