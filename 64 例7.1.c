#include "stdio.h"
#include "string.h"
struct stu
{
	char name[30];
	int score[4];
	int total;
};
void sort(struct stu *p,int n)
{
	int i,j,k,m,temp;
	char t[30];
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(p[k].total<p[j].total)
				k=j;
		if(k!=i)
		{
			strcpy(t,p[k].name);
			strcpy(p[k].name,p[i].name);
			strcpy(p[i].name,t);
			for(m=0;m<4;m++)
			{
				temp=p[k].score[m];
				p[k].score[m]=p[i].score[m];
				p[i].score[m]=temp;
			}
			temp=p[k].total;
			p[k].total=p[i].total;
			p[i].total=temp;
		}
	}
}
int main(void)
{
	struct stu s[5];
	int i,j;
	printf("\nEnter name math computer English Physical:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s%d%d%d%d",s[i].name , &s[i].score[0] , &s[i].score[1] , &s[i].score[2], &s[i].score[3]);
		s[i].total=0;
		for(j=0;j<4;j++)
			s[i].total+=s[i].score[j];
	}
	sort(s,5);
	for(i=0;i<5;i++)
		printf("%s, %d, %d, %d, %d, %d\n",s[i].name,s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].total);
	return 0;
}