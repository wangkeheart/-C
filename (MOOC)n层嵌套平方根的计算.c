#include "stdio.h"
#include "math.h"
double ttp(double t,int x);
int main()
{
	double a,d;
	int e;
	printf("Please input x and n:");
	scanf("%lf,%d",&a,&e);
	d = ttp(a,e);
	printf("Result=");
	printf("%.2lf",d);
	return 0;
}
double ttp(double t,int x)
{
	double a=0;
	if(x==1)
		a=sqrt(t);
	else if(x>1)
	{
		x--;
		a=sqrt(t+ttp(t,x));
	}
	return a;
}
/*
n��Ƕ��ƽ�����ļ��㣨4�֣�
��д�������õݹ鷨ʵ��������ʾn��Ƕ��ƽ�����ļ��㣺
 y(x)=sqrt(x+��+sqrt(x+sqrt(x)))
�ݹ麯��ԭ�ͣ�double Y(double x, int n)��
�������н��ʾ��1��
Please input x and n:16,1�L
Result=4.00
�������н��ʾ��2��
Please input x and n:16,2�L
Result=4.47
�������н��ʾ��3��
Please input x and n:16,3�L
Result=4.52
�������н��ʾ��4��
Please input x and n:16,0�L
Result=0.00
������ʾ��Ϣ��"Please input x and n:"
�����ʽ: "%lf,%d"
�����ʽ�� "Result=%.2f\n"
ע�⣺Ϊ������ָ�ʽ������ֱ�ӿ���ճ��������������롢�����ʾ��Ϣ�͸�ʽ�����ַ�����
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb;
*/