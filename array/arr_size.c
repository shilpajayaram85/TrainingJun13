#include<stdio.h>
#define array_size(arr) (sizeof(arr)/sizeof(arr[0]))
int main()
{

	int a[] = {1,2,3,4,5};
	int b[] = {5,78,9,0};
	int size_a = array_size(a) ;
	int size_b = array_size(b);
	printf("Array Size = %d\n%d", size_a, size_b);
	printf("\n\n");
}
