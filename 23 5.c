#include "stdio.h"
int main()
{
	int a,b,c,d;
	printf("������n:");
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
	printf("������n:");
	scanf("%d", &n); // ��������n�������������ĸ߶�
	for(i=1; i<=n; i++)
	{
		for(j=1; j<8-i; j++) // ÿһ�е�һ���Ǻ�֮ǰ�Ŀո���
		printf(" "); // �������ʾΪ�հ�
		for(j=1; j<=2*i-1; j++) // ÿһ����������ǺŸ���
		{
			printf("*");
		}
		printf("\n");
	
	}
}
*/
