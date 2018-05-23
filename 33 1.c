#include "stdio.h"
void main(){
	int i;
	char tt[81];
	printf("Please input a string:");
	gets(tt);
	for(i=0;tt[i];i++)
		if(('a'<=tt[i])||(tt[i])<='z')
			tt[i]+=32;
	printf("The result string is %s\n",tt);
}
