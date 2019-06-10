#include "stdio.h"
#include "string.h"
int main()
{
	char s1[80];
	char s2[10]="I am a boy";
	char s3[10]={'I',' ','a','m',' ','a',' ','b','o','y'};
	int i=0;
	printf("input string s1:");
	while((s1[i]=getchar())!='\n')
		i++;
	s1[i]='\0';
	for(i=0;s1[i]!='\0';i++)
		;
	printf("字符串s1的长度为：%d\n",i);
	printf("字符串s1的长度为：%d\n",strlen(s1));
	printf("字符串s2的长度为：%d\n",strlen(s2));
	printf("字符串s3的长度为：%d\n",strlen(s3));
	return 0;
}
