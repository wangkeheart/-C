#include "stdio.h"
int prime(int k)
{
	if((k==2)||(k==3)||(k==11)||(k==13)||(k==5)||(k==7))
		return 1;
		else 
		{
			if((k%2==0)||(k%11==0)||(k%7==0)||(k%13==0)||(k%9==0)||(k%3==0)||(k%10==0)||(k%5==0))
			return 0;
		else
			return 1;
		}
}
int main()
{
	int m,n;
	int k,p=0;
	//int prime(int k);
	printf("Input m:");
	scanf("%d",&m);
	printf("Input n:");
	scanf("%d",&n);
	for(k=m+1;k<n;k++)
		if(prime(k)==1)
			p+=k;
	printf("The sum is:%d",p);
	return 0;
}