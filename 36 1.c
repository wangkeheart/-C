#include "stdio.h"
#define M 5
void main()
{
	int xx[][M]={{1,2,3,4,5},{4,3,2,1,0},{6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7}};//加了个 M  但是严格意义上 应该都加M为妙。
	int i,j,sum=0;//初始化sum 。
	printf("%d行%d列矩阵为:\n",M,M);
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%d ",xx[i][j]);//  把%f改为%d,再加上一个空格。
		printf("\n");
	}
	for(i=0;i<M;i++)
		sum+=xx[i][i]+xx[i][M-i-1];//减了个1  (#^.^#)。
	printf("两条对角线上元素之和为：%d\n",sum);
}