#include "stdio.h"
#define M 4
void main()
{
	int a[M][M]={{14,23,52,3},{34,15,52,41},{12,15,8,9},{54,98,23,21}};
	int i,j,t,sum,ln[M];
	for(i=0;i<M;i++)
	{
		t=0;
		for(j=1;j<M;j++)
			if(a[i][j]>a[i][t])
				t=j;//���1    �������Եģ�ÿһ��ѭ�������� t ���ᱣ��˴Σ��У�ѭ�����Ԫ�ص� �� �ꡣ
		ln[i]=t;
	}
	printf("\n%d��%d�з���Ϊ:\n",M,M);
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%8d",a[i][j]);
		printf("\n");
	}
	sum=0;//���2      ������Ҫ��sum���г�ʼ����Ҫ�Գ�ʼ�������У���������±����ۼӵ�ʱ��
	printf("\nÿ�����Ԫ�ؼ����к�:\n");
	for(i=0;i<M;i++)
	{
		printf("%3d��%2d\n",a[i][ln[i]],ln[i]);//�ڶ������ź�����3  
		sum=sum+a[i][ln[i]];
	}
	printf("\n�������Ԫ�صĺ�Ϊ��%d\n",sum);
}