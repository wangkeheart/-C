#include "stdio.h"
#include "math.h"
void main()
{
	int num,i;
	int sq;
	printf("������һ������1��������");
	scanf("%d",&num);
	do
	{
		sq=(int)sqrt(num);
		for(i=2;i<=sq;i++)
		if(num%i==0)
		break;
		if(i<=sq)
		printf("%d����������\n",num);
		else
		printf("%d�������� \n",num);
		printf("������һ��������num(���벻���ڵ�1�������˳�):");
		scanf("%d",&num);
	}
	while(num>1);
		printf("�˳���\n");
}
