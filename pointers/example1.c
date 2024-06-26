#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[]="ABC";
	
	char *ptr = (char*)&arr;
	printf("%p %p\n", arr, ptr);
	printf("\n 1 %c %c\n", *ptr, *(ptr+1));
	
    char msg[][5] = {"AB", "gh", "er"};
	char (*ptr2)[5];
	
	ptr2 = &msg[0];
	printf("%p %p", msg, ptr2);
	printf("\n 2 %c %c", (*ptr2)[0], (*ptr2)[1]);
	
}
