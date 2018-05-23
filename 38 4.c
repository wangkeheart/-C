#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
	char a[900],b,c;
	int d=0,e,f,g,h,i=0,temp,j,k=0;
	while("true")
	{
		while((a[d]=getchar())!='\n')
		{
			d++;
		}
		a[d]='\0';
		e=strlen(a);
		for(f=0;f<e;f++)
			if(a[f]==' ')
				i++;
		printf("the row %d have %d\n",k,i);
		i=0;
		k++;
		d=0;
		getchar();
	}
	return 0;
}