#include<stdio.h>

int main()
{

	int a  , b ;
	int r;
	printf("Enter two numbers\n");
	r = scanf("%d%d", &a, &b);
	printf("Np of inputs  = %d\n", r);
	r =printf("%d + %d = %d\n",  a, b, a+b);
	printf("Np of charcters printed = %d\n", r);
	return 0;

}
