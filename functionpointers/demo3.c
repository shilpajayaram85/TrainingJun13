#include<stdio.h>

typedef void (*fp1) (int, int);

void min(int a, int b)
{
   printf("\n%d\n",a<b?a:b);
}

fp1 max(int a, int b)
{
   printf("\n%d\n",a>b?a:b);
   return min;
}

int main()
{ 
  
   fp1 (*fp_max)(int, int);
   
   void (*fp_min)(int, int);

  fp_max = max; //fp=&max;
  
   fp_min = fp_max(10,20);

  fp_min(10,20);

 return 0;
}

