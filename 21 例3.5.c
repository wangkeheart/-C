#include "stdio.h"
#include "stdlib.h"
void main()
{
	int a,i,sum=0;
	for(i=1;i<=3;i++)  //����i=1 ʹ��i++������ѭ����ֱ��������i<=3������ѭ����
	{
		scanf("%d",&a);
		if(a%2==0) //a/2��������
		printf("��ż����\n");
		else
	
			printf("��������\n");
		sum=sum+a;
	}
	printf("sum=%d��\n",sum);
}