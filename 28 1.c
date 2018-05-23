#include "stdio.h"
#include "stdlib.h"
int main()
{

	int i,x,a[1000],n;
	printf("输入数组元素的个数:");
	scanf("%d",&n);
	printf("输入%d个数组元素的值：",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("x:");
		scanf("%d",&x);//←----------不要光看，要明白为什么--------------| 解释：自己想！
		for(i=0;i<n;i++)//                                               |                                           
		{				//                                               |
			if(a[i]==x)//                                                |
			break;  //不能改成continue，否则会导致输出 printf("没有找到与-相等的元素!"); 
		}
		if(a[i]!=x)
			printf("没有找到与%d相等的元素!\n",n);
		else
			printf("和%d相同的数组的元素是a[%d]=%d\n",x,i,a[i]);
	
	return 0;
}