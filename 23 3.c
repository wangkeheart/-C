#include "stdio.h"
void main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		j=i*10+6; //�տ�ʼ����ط������ j=j*10+6  
		if((i%3!=0)&&(i%10!=6)) //�������Ĳ��Ͻ���&&(i%10!=6)ɾ����
			                    //Դ����������䡣
		continue;
		printf("%4d",j);
	}
}