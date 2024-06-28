#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void validateDesignations(char designations[][3], int count) {
    // Assert the count of designations
    assert(count >= 2);

    for (int i = 0; i < count; i++) {
        // Assert that each designation is one of "E2", "E3", "E4"
        assert(strcmp(designations[i], "E2") == 0 || 
               strcmp(designations[i], "E3") == 0 || 
               strcmp(designations[i], "E4") == 0);
    }
}

int main() {
    char designations[3][3];
    int count;

    printf("Enter number of designations (at least 2): ");
    scanf("%d", &count);
    assert(count >= 2); // Ensure at least two designations are read

    for (int i = 0; i < count; i++) {
        printf("Enter designation %d: ", i + 1);
        scanf("%2s", designations[i]);
    }

    validateDesignations(designations, count);

    printf("Valid designations entered:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", designations[i]);
    }

    return 0;
}

