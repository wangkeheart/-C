#include "stdio.h"
int fun(double x[],int n)
{
	int j,c=0;
	double xa=0;// int xa=0; 改 double
	for(j=0;j<n;j++)
		xa+=x[j]/n;
	printf("平均值为%lf\n",xa);//  %f 改 %lf
	for(j=0;j<n;j++)
		if(x[j]>=xa)//  => 改 >=
			c++;
	return c;
}
void main()
{
	double x[100]={193.199,195.673,195.757,196.051,196.092,196.596,196.579,196.763};
	printf("平均值以上的实数个数为：%d\n",fun(x,8));
}
