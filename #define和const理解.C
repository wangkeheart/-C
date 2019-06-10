#include "stdio.h"
#include "stdlib.h"
int main()
{
	const int pi=3;
	
	if(pi==3)
	{
		const int pi=4;
		printf("%d",pi);  //输出4
	}
	printf("%d",pi);//输出3

}
//这段程序说明了 const定义的常量是在一定条件下可以更改的（比如循环中），但是仅限
//循环，循环之外常量的值是不变的。

/*
#include "stdio.h"
#include "stdlib.h"
#define pi 3
int main()
{
//	pi=4;  //会报错，不能这样更改，不会输出4
//  pi==4; //不会报错，但是无法输出4
//  if(pi==3)
	{
		//pi=4;//失败，报错
		pi==4;//不会报错，但是输出是3
		printf("%d",pi);
		system("pause");
	}
	printf("%d",pi);//正常输出3
	system("pause");
}
*/

/* 所以说论全局常量不能更改的只能定义宏常量。在一定条件下能更改但总体不变的，使用const
定义的常量即可。
*/