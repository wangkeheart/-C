#include "stdio.h"
void main(void)
{
	int year,month;
	scanf("%d-%d",&year,&month);
	switch(month)
	{
		case 1:  //��Щ�ɲ��Ƿֺ�Ŷ!
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("31�졣\n");
		break;  //���ǽ���ѭ������˼�����ȥ����������ȷ�������Ȼ����� ��������󡱡�
		case 4:
		case 6:
		case 9:
		case 11:
		printf("30�졣\n");
		break;
		case 2:
	if((year%4==0&&year%100!=0)||year%400==0) //���((/4����=0��/100������Ϊ��)��/400����Ϊ��)
		printf("29�졣\n");
	else
		printf("28�졣\n");
		break;
		default:printf("�������");
	}
}
