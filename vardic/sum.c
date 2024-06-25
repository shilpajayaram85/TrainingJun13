#include <stdarg.h>
#include <stdio.h>
int sum_vardic(int count, ...)
{
    va_list args;

    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

int main()
{
	printf("Sum of three = %d\n", sum_vardic(3,10,20,30));
	printf("Sum of four = %d\n", sum_vardic(4,10,20,30,40));
	printf("Sum of zero = %d\n", sum_vardic(0));
	return 0;
}
