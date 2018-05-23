/*#include "stdio.h"
void main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0)
	printf("%d年是闰年",a);
	else if(a%100==0)
	printf("%d年不是闰年",a);
	else if(a%4==0)
	printf("%d年是闰年",a);
	else if(a%4!=0)
	printf("%d年不是闰年",a);
}
*/
#include "stdio.h"
void main()
{
	int a;
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0) //|| 和数学上的 "或者"差不多
	printf("%d年是闰年",a);
	else
	printf("%d年不是闰年",a);
}
	