#include "stdio.h"
#include "stdlib.h"
void main()
{
	int a,b;
	scanf("%d",&a);
	if(a%400==0)
	{
		b=1;
	}
	else
	{
		if(a%4==0)
		{
			if(a%100!=0)    // !=��ʾ������
				b=1;
			else
				b=0;
			}
			else
			{
				b=0;
			}
		}
	
	if(b) //��˼���Ƿ����b
	printf("%d�����ꡣ\n",a);
	else
	printf("%d�������ꡣ\n",a);
	system("pause");
}
				