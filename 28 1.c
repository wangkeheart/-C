#include "stdio.h"
#include "stdlib.h"
int main()
{

	int i,x,a[1000],n;
	printf("��������Ԫ�صĸ���:");
	scanf("%d",&n);
	printf("����%d������Ԫ�ص�ֵ��",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("x:");
		scanf("%d",&x);//��----------��Ҫ�⿴��Ҫ����Ϊʲô--------------| ���ͣ��Լ��룡
		for(i=0;i<n;i++)//                                               |                                           
		{				//                                               |
			if(a[i]==x)//                                                |
			break;  //���ܸĳ�continue������ᵼ����� printf("û���ҵ���-��ȵ�Ԫ��!"); 
		}
		if(a[i]!=x)
			printf("û���ҵ���%d��ȵ�Ԫ��!\n",n);
		else
			printf("��%d��ͬ�������Ԫ����a[%d]=%d\n",x,i,a[i]);
	
	return 0;
}