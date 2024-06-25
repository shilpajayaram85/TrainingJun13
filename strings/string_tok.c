
#include <stdio.h>
#include<string.h>
#define MAX 50


int main()
{
	char str[MAX];
	char *token;
	int count = 0;
	printf("Enter a sentence\n");
	fgets(str, MAX, stdin);
	if(str[strlen(str)-1]== '\n')
		str[strlen(str)-1] = '\0';

	token = strtok(str, " ");
	while(token != NULL)
	{
		count++;
		printf("%s\n", token);
		token = strtok( NULL, " ");
	}
	printf("No. of words = %d\n", count);

	return 0;
}

