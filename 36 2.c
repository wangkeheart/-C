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
				t=j;//填空1    ：很明显的，每一次循环结束后 t 都会保存此次（行）循环最大元素的 列 标。
		ln[i]=t;
	}
	printf("\n%d行%d列方阵为:\n",M,M);
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%8d",a[i][j]);
		printf("\n");
	}
	sum=0;//填空2      ：必须要对sum进行初始化，要对初始化有敏感，尤其填空下边有累加的时候。
	printf("\n每行最大元素及其列号:\n");
	for(i=0;i<M;i++)
	{
		printf("%3d：%2d\n",a[i][ln[i]],ln[i]);//第二个逗号后边填空3  
		sum=sum+a[i][ln[i]];
	}
	printf("\n各行最大元素的和为：%d\n",sum);
}