#include "stdio.h"
int fun(double x[],int n)
{
	int j,c=0;
	double xa=0;// int xa=0; �� double
	for(j=0;j<n;j++)
		xa+=x[j]/n;
	printf("ƽ��ֵΪ%lf\n",xa);//  %f �� %lf
	for(j=0;j<n;j++)
		if(x[j]>=xa)//  => �� >=
			c++;
	return c;
}
void main()
{
	double x[100]={193.199,195.673,195.757,196.051,196.092,196.596,196.579,196.763};
	printf("ƽ��ֵ���ϵ�ʵ������Ϊ��%d\n",fun(x,8));
}
