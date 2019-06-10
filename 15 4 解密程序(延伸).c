#include "stdio.h"
int main()
{
	char  c1,c2,c3,c4,c5;
	printf("【这是解密程序】请输入需要解密的字符（限5个字符的单词）:");
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	c1=c1-4;
	c2=c2-4;
	c3=c3-4;
	c4=c4-4;
	c5=c5-4;
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	return 0;
}

