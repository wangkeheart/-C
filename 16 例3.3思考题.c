/*#include "stdio.h"
void main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0)
	printf("%d��������",a);
	else if(a%100==0)
	printf("%d�겻������",a);
	else if(a%4==0)
	printf("%d��������",a);
	else if(a%4!=0)
	printf("%d�겻������",a);
}
*/
#include "stdio.h"
void main()
{
	int a;
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0) //|| ����ѧ�ϵ� "����"���
	printf("%d��������",a);
	else
	printf("%d�겻������",a);
}
	