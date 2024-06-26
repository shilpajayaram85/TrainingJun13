#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int b=20;
	int *ip;
	char *cp;
	float *fp;
	double *dp;

	

	ip = &a;
	printf("value of a = %d\n", a);
	printf("Address of a = %u\n", &a);
	
	printf("value of a = %d\n", *ip);
	printf("Address of a = %u\n", ip);

	ip= &b;

	printf("value of b = %d\n", *ip);
	printf("Address of b = %u\n", ip);

 printf("%d\n%d\n%d\n%d\n", sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));
	return EXIT_SUCCESS;
}
