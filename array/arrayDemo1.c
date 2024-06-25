#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
	int var1 = 10;
	int a[SIZE], i;
	printf("Enter array elements\n");
	for(i = 0; i < SIZE; i++)
	{
		a[i]= 1;
	}
	printf("var1 = %d address = %u\n", var1, &var1);
	printf("Array Elements: \n");

	for(i = 0; i < SIZE; i++)
	{
		printf("value = %d\t Address = %u\n", i[a], &a[i]);
	}

		printf("value = %d\t Address = %u\n", a[-2], &a[-2]);
		printf("value = %d\t Address = %u\n", a[5], &a[5]);
		printf("value = %d\t Address = %u\n", a[6], &a[6]);
	printf("\n\n");

	return EXIT_SUCCESS;

}
