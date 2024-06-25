#include <stdio.h>
#include<string.h>
#define MAX 50


int main()
{
	char str[MAX];

	fgets(str, MAX, stdin);
	/*if(str[strlen(str)-1]== '\n')
		str[strlen(str)-1] = '\0';*/
	printf("String is: \n");
	fputs(str, stdout);
	return 0;
}

