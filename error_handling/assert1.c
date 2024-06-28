#include <stdio.h>
#include <assert.h>

int main() {
    int x = 5;
    int y = 10;

    // This assertion will pass
    assert(x < y);

    // This assertion will fail and terminate the program
    assert(x > y);

    printf("This line will not be executed.\n");

    return 0;
}

