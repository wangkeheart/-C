#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int h(char* a,char* b) //ָ����Ӧ����
{
	int f=strlen(b);
	int k=0;int i;
	while(a=strstr(a,b))       //strstr(str1,str2) ���������ж��ַ���str2�Ƿ���str1���Ӵ�������ǣ�
	{                         //��ú�������str2��str1��"�״γ��ֵĵ�ַ"ע����ǳ��ǳ���Ҫ�����򣬷���NULL.
		//system("pause");
		k++;
		a=a+f;  //ע��
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
	printf("Output:count=%d\n",h(a,b));//---| ��ֵ����h(a,b);
	return 0;
	
}

