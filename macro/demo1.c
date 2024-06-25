#include<stdio.h>
#define CUBE(b) b*b*b
#define MIN(x,y) ((x)<(y)?(x):(y))


int main()
{
 	 printf("%d\n", CUBE(2));
	 printf("%f\n", CUBE(2.3));
     printf("%d\n", CUBE(1+2));
	 printf("%d\n", MIN(10,2));
	 printf("%d\n", MIN(10+1,2+1));
	 int a = 5, b = 15;
	 printf("%d\n", MIN(++a,b));

	 printf("%d\t%d\n", a,b);

     return 0;
}
