#include "stdio.h"
int main()
{
	int a[40][40],b,c,d,e,f=0,temp=0;
	scanf("%d",&b);
	scanf("%d",&c);
	for(d=0;d<b;d++)
		for(e=0;e<c;e++)
			scanf("%d",&a[d][e]);
	printf("%d��%d�о���Ϊ:\n",b,c);
	for(d=0;d<b;d++)
		for(e=0;e<c;e++)
		{
			if(d!=0&&e%4==0)
			{
				printf("\n");
			}
			printf("%d ",a[d][e]);
		}

	printf("\nÿ�����Ԫ�ؼ����к�:\n");
	for(d=0;d<b;d++)
	{
		for(e=0;e<c;e++)
		{
			if(a[d][f]<a[d][e])
			{
				f=e;
			}
		}
		printf("%d:%d\n",a[d][f],f);
		temp+=a[d][f];
		f=0;
	}
	printf("�������Ԫ�صĺ�Ϊ:%d\n",temp);
	return 0;
}