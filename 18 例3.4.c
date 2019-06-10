#include "stdio.h"
void main(void)
{
	int year,month;
	scanf("%d-%d",&year,&month);
	switch(month)
	{
		case 1:  //这些可不是分号哦!
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("31天。\n");
		break;  //这是结束循环的意思，如果去除，将会正确的输出，然后加上 “输入错误”。
		case 4:
		case 6:
		case 9:
		case 11:
		printf("30天。\n");
		break;
		case 2:
	if((year%4==0&&year%100!=0)||year%400==0) //如果((/4余数=0和/100余数不为零)或/400余数为零)
		printf("29天。\n");
	else
		printf("28天。\n");
		break;
		default:printf("输入错误");
	}
}
