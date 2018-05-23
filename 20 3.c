#include "stdio.h"
int main()
{
	int a,b;
	char c;
	scanf("%d,%d",&a,&b);
	if(a>b)  //没>> 这种比较的。因为=和赋值很像 所以要双写。
	c='>';
	else if(a==b)
	c='=';
	else if(a<b)
	c='<';
	printf("%d%c%d",a,c,b);
	return 0;
}
