#include "stdio.h"
int main()
{
	int a,b;
	char c;
	scanf("%d,%d",&a,&b);
	if(a>b)  //û>> ���ֱȽϵġ���Ϊ=�͸�ֵ���� ����Ҫ˫д��
	c='>';
	else if(a==b)
	c='=';
	else if(a<b)
	c='<';
	printf("%d%c%d",a,c,b);
	return 0;
}
