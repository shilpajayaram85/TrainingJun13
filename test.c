#include<stdio.h>
int sum(int, int);
int product(int, int);
int main()
{
int x,y;
x=5;
y=20;
printf("The Sum is %d\n",sum(x,y));
printf("The Product is %d\n",product(x,y));
}
/***********************************************************************
Function Sum finds the sum of two integers
***********************************************************************/
int sum(int a , int b)
{
int s;
s=a+b;
return(s);
}
/***********************************************************************
Function Product finds the product of two integers.
***********************************************************************/
int product(int a, int b)
{
int p;
p=a*b;
return(p);
}

