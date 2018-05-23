#include "stdio.h"
#include "stdlib.h"
/*void main()
{
	int *p,a;
	a=10;
	p=&a;
	a=*p+10;
	printf("%d",a);
}*/
/*void main()
{
	int a[]={1,2,3,4,5};
	int *p,x,y;
	p=&a[0];
	x=*(p+2);
	y=*(p+4);
	printf("p=%d,x=%d,y=%d",*p,x,y);
}
// 数组是以一个字节作为单位的 所以 *(p+2),在本例中是指向 3 。
*/
void main()
{
	int a[]={1,3,5,7,9},*p;
	p=&a[1];
	printf("%d\n",*p++);//3
	printf("%d\n",*p);//5
	printf("%d\n",(*p)++);//5
	printf("%d\n",*p++);//6
	printf("%d\n",*p);//7
	/*
		解释：第一先把 *p的值输出（3）,再把p地址加了个1.
		第二把 p加过1地址的值输出，所以是5.
		第三把 第二个p地址对应的值输出（5），然后执行p地址指向的数字加1.结果数组里的值 5变成了6.
		第四把 第三个p地址对应的值输出（6），然后执行p地址加1.
		最后 把第四修改过地址的*p进行输出 所以是 7.
	*/
}