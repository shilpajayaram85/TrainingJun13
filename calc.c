#include <stdio.h>

int main() {

    int a = 12, b = 25,num =1 ,i;
	printf("Output = %d\n", a & b);
    printf("Output = %d\n", a | b);
    printf("Output = %d\n", a ^ b);
	for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");

    for (i = 0; i <= 2; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);
    }
    return 0;
}
