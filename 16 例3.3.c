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
			if(a%100!=0)    // !=表示不等于
				b=1;
			else
				b=0;
			}
			else
			{
				b=0;
			}
		}
	
	if(b) //意思是是否存在b
	printf("%d是闰年。\n",a);
	else
	printf("%d不是闰年。\n",a);
	system("pause");
}
				