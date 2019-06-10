#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int h(char* a,char* b) //指向相应数组
{
	int f=strlen(b);
	int k=0;int i;
	while(a=strstr(a,b))       //strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。如果是，
	{                         //则该函数返回str2在str1中"首次出现的地址"注意这非常非常重要；否则，返回NULL.
		//system("pause");
		k++;
		a=a+f;  //注意
	}
	printf("%d",i);system("pause");
	return k;//---------------------------
}        //                              |
int main()//                             |
{         //                             |
	char a[20],b[20];//                  |
	printf("Input a string:");//         |
	gets(a);//                           |
	printf("Input a substring:");//      |
	gets(b);                       //    |
	printf("Output:count=%d\n",h(a,b));//---| 把值给了h(a,b);
	return 0;
	
}

