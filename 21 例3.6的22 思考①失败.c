#include "stdio.h"
#include "math.h"
void main()
{
	int num,i;
	int sq;
	i=2;   //���Ӵ˾�ᵼ�� while ����һ�����棺������δ��ʼ��i��
	printf("������һ������1��������");
	scanf("%d",&num);
	do
	{
		sq=(int)sqrt(num);
		while(i<=sq)  // while����δ֪ѭ��������ѭ����ֱ�����������Ż������
		//for(i=2;i<=sq;i++):for������֪ѭ��������ѭ��,����i=2��i<=sq�Ƚ�
		//�����������������ִ��(�������ֱ������ѭ���ˡ�)��ѭ��һ��֮��
		//��i����i++�����㣬����i<=sq�Ƚϣ���������ִ�У�����������ѭ����
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
