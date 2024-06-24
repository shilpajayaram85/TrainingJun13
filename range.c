#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{

 printf("Char MIN: %d\n", CHAR_MIN);
 printf("Char MAX: %d\n", CHAR_MAX);

 //printf("UChar MIN: %d\n", CHAR_MIN);
 printf("UChar MAX: %d\n", UCHAR_MAX);


 printf("SHORT MIN: %d\n", SHRT_MIN);
 printf("SHORT MAX: %d\n", SHRT_MAX);
 printf("UShort MAX: %d\n", USHRT_MAX);


 printf("int MIN: %d\n", INT_MIN);
 printf("int MAX: %d\n", INT_MAX);
 printf("Uint MAX: %ud\n", UINT_MAX);

 printf("long MIN: %d\n", LONG_MIN);
 printf("long MAX: %ud\n", LONG_MAX);
 printf("long MAX: %ud\n", ULONG_MAX);


 printf("Float MIN: %d\n", FLT_MIN);
 printf("Float MAX: %ud\n", FLT_MAX);


 printf("Double MIN: %d\n", DBL_MIN);
 printf("Double MAX: %ud\n", DBL_MAX);
 
 printf("Long Double MIN: %d\n", LDBL_MIN);
 printf("Long Double MAX: %ud\n", LDBL_MAX);
 printf("\n\n");
 return 0;
}

