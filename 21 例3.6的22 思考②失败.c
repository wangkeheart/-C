#include "stdio.h"
#include "math.h"
void main()
{
		int num,i;
		int sq;
		i=2;
		printf("������һ������1��������");
		scanf("%d",&num);
		num=num;
		while(num>1)
{
	
		sq=(int)sqrt(num);
		while(i<=sq)
		//if(num%i==0)    ���ʣ�
		break;
		if(i<=sq)
		printf("%d����������\n",num);
		else
		printf("%d�������� \n",num);
		printf("������һ��������num(���벻���ڵ�1�������˳�):");
		scanf("%d",&num);
}
	
		printf("�˳���\n");
}
