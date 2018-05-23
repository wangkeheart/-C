#include "stdio.h"
#include "string.h"
int main()
{
	char a[300],b[300];
	int c,d,e,f=0;
	printf("Input a string:");
	gets(a);
	printf("Input another string:");
	gets(b);
	c=strlen(a);
	d=strlen(b);
	for(e=c;e<c+d;e++)
	{
		a[e]=b[f];
		f++;
	}
	a[c+d]='\0';
	printf("Output:");
	puts(a);
	return 0;
}