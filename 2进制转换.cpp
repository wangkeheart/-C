#include "stdio.h"
void printzs(double a[],double b){
	int i,q;
	((b==0)?(printf("0"),i=2):i=0);
	if(i==2)
		return;
	for(i=0;i<15;i++)
		if(a[i]<=b)
			break;
	for(q=i;q<16;q++)
		if(a[q]<=b)
			printf("1",b-=a[q]);
		else
			printf("0");
	
}
void printxs(double p){
	int i,j;
	for(i=0;i<5;i++){
		p*=2;
		j = (int)p;
		if(j<=0)
			printf("0");
		else if(j>0)
			printf("1",p-=1);
	}
}
void main(){
	double a[20]={32768,16384,8192,4096,2048,1024,512,256,128,64,32,16,8,4,2,1};
	double b,j,s;
	int c,k=0,i;
	scanf("%lf",&b);
	((b<0)?(b=-b,i=1):i=0);
	c = (int)b;
	j = (double)c;
	if(j!=b)
		k = 1;
	if(k==0){
		if(i==1)
			printf("-");
		printzs(a,b);
	}
	if(k==1){
		if(i==1)
			printf("-");
		printzs(a,j);
		s = b - j;
		printf(".");
		printxs(s);
	}

}