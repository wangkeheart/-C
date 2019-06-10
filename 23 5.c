#include "stdio.h"
int main()
{
	int a,b,c,d;
	printf("请输入n:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=7-b;c++)
			printf(" ");
		for(d=1;d<=2*b-1;d++)
		{
			printf("*");
		}
			printf("\n");
	}
}













/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("请输入n:");
	scanf("%d", &n); // 键盘输入n，决定金字塔的高度
	for(i=1; i<=n; i++)
	{
		for(j=1; j<8-i; j++) // 每一行第一个星号之前的空格数
		printf(" "); // 输出的显示为空白
		for(j=1; j<=2*i-1; j++) // 每一行上输出的星号个数
		{
			printf("*");
		}
		printf("\n");
	
	}
}
*/
