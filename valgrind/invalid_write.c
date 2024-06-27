#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p =(int*)malloc(4*sizeof(int));
free(p);
p[2] = 10;
printf("%d\n", p[2]);
}
