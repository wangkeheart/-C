#include "stdio.h"
#include "math.h"
void main()
{
	int num;
	printf("������һ������1��������");
	scanf("%d",&num);
	do
	{
		if((num==2)||(num==3)||(num==11)||(num==13)||(num==5)||(num==7))
		printf("%d������.\n",num);
		else 
		{
			if((num%2==0)||(num%11==0)||(num%7==0)||(num%13==0)||(num%9==0)||(num%3==0)||(num%10==0)||(num%5==0))
			printf("%d����������\n",num);
		else
			printf("%d�������� \n",num);
		}
			printf("������һ��������num(���벻���ڵ�1�������˳�):");
			scanf("%d",&num);
	}
	while(num>1);
	printf("�˳���\n");
}
