#include "stdio.h"
int main()
{
	int a[10],b,c,f;
	printf("Input:");
	scanf("%d",&b);  // 此处b的作用是：输入10以内数组的个数。
	printf("Input %d integers:",b); // 把b输出到printf
	for(c=0;c<b;c++) // 此处c的作用是：1.循环2.数组循环输入。
	{
		scanf("%d",&a[c]); //c每一次的相加就会导致数组的项发生改变。
	}
	//此处曾经使用 printf("%d",b);和system("pause");检查b的值。
	f=b-1;           //此处如果单纯写 f=b就会出乱码。原因是没有a[b]这个数。
	printf("Output:");
	for(c=0;c<b;c++)//此处d的作用将是：将数组倒着输出。
	{
		printf("%2d",a[f]);
		f=f-1;
	}
	return 0;
}