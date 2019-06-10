#include "stdio.h"
int main()
{
	int mun;
	scanf("%d",&mun);
	if(mun%2) //变成了有余数的话，就是偶数，否则是奇数。
		printf("%d是个偶数",mun);
	else
		printf("%d是个奇数",mun);
	//此代码错误。因为只是计算出余数，并没有对余数进行判断。
	//但是这个错误代码是课本要求打的 没办法。
	return 0;
}
//运行结果：1是偶数 ，2是奇数。背离了常理。
