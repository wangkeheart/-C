#include "stdio.h"
int main()
{
	int a,b,c;
	printf("������һ������1����:");
	scanf("%d",&a);
	if(a<=1)
	{
		printf("�������");
	}
	else
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0||a==1)
			{
				c=1;
			}
		}
		if(c==1)
		{
			printf("�Ǻ�����");
		}
		else
		{
			printf("��������");
		}
	}
	return 0;
}
