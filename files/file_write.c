#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   int ret_val = 0;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("test.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   ret_val = fprintf(fptr,"%d",num);
   if(ret_val <=0)
   {
   	printf("Write Failed\n");
	return EXIT_FAILURE;
  }
   ret_val = fclose(fptr);
   if(ret_val !=0)
   { 
   	printf("Closing the file failed\n");
	return EXIT_FAILURE;
   } 

   return 0;
}

