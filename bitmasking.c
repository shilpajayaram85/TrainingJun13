#include <stdio.h>
int main()
{
    unsigned int n = 24;
    printf("To divide a number by 2, right-shift it by one position: %d", n >> 1);
    printf("\nTo multiply a number by 2, left-shift it by one position: %d", n << 1);
	n |= 1 << 5;
    printf("After setting the fifth bit from right to 1: %d", n);
    n = 24;
    n &= ~ (n << 1);
    printf("\nAfter unsetting the first bit from left to 0: %d", n);
	n ^= 1 << 2;
    printf("After flipping the second bit from right: %d", n);
	n = 5;
    if(n & 1)
        printf("%d is odd.\n", n);
    else
        printf("%d is odd.\n", n);

    return 0;
}
