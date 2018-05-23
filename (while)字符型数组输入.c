#include "stdio.h"
int main()
{
	int i=0;
	char str[20];
	printf("Enter a string:");
	while((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';
	for(i=0;str[i]!='\0';i++)
		putchar(str[i]);
		return 0;
}