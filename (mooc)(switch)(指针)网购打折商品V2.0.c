#include "stdio.h"
#include "math.h"
#include "stdlib.h"
double ttp(double *p,double *b);
int main()
{
	double a,b,j,k;
	printf("Input payment:");
	scanf("%lf",&a);
	b = fmod(a,100);
	k = ttp(&b,&a);
	j = a-a*k;
	printf("price = %.1lf\n",j);
	return 0;
}
double ttp(double *p,double *b)
{
	double a;
	int d;
	d=(int)((*b)/100);
	switch(d)
	{
		case 0:a=0/100;break;
		case 1:a=5.0/100;break;
		case 2:
		case 3:
		case 4:a=8.0/100;break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:a=10.0/100;break;
		default:a=15.0/100;break;
	}
	return a;
}
/*
4����������ƷV2.0��5�֣�
��Ŀ���ݣ�
ĳ���Ϲ�����վ���û�ʵ���Żݣ���ҹ������pԽ�࣬���ۿ�Խ�ࡣ
��׼���£�
p<100Ԫ         û���ۿ�
100Ԫ��p<200Ԫ       5%�ۿ�
200Ԫ��p<500Ԫ  8%�ۿ�
500Ԫ��p<1000Ԫ          10%�ۿ�
1000Ԫ��p               15%�ۿ�

����ʾ������������Կ������ۿ۵ı仯���й��ɵġ���������ﵽ��100Ԫ����2����5����10��ʱ���ۿ�ֵ�ͻᷢ���仯������һ������c����100�ı�������c<1ʱ�����ۿۣ���1��c<2ʱ���ۿ�d=5%����2��c<5ʱ���ۿ�d=8%����5��c<10ʱ���ۿ�d=10%����10��cʱ���ۿ�d=15%��
ע����������۸���ص���������Ϊfloat
�������н��ʾ��1��
Input payment:90�L
price = 90.0
�������н��ʾ��2��
Input payment:100�L
price = 95.0
�������н��ʾ��3��
Input payment:300�L
price = 276.0
�������н��ʾ��4��
Input payment:1000�L
price = 850.0

�������н��ʾ��5��
Input payment:650.5�L
price = 585.5
������ʾ��"Input payment:"
�����ʽ: "%f" 
�����ʽ��"price = %.1f\n"  (ע���Ⱥ����Ҿ��пո�)
ע�⣺Ϊ������ָ�ʽ������ֱ�ӿ���ճ��������������롢�����ʾ��Ϣ�͸�ʽ�����ַ�����
ʱ�����ƣ�500ms�ڴ����ƣ�31kb
*/