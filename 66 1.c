#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define N 10
typedef struct ss
{
	char num[10];int s;
}STU;
fun(STU a[],STU *s)
{
	STU h;
	int i;
	h = a[0];
	for(i=1;i<N;i++)
		if(a[i].s<h.s)
			h = a[i];
		*s = h;
}
void main()
{
	STU a[N]={{"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
	{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71}},m;
	int i;
	printf("***** The original data *****\n");
	for(i=0;i<N;i++)
		printf("No = %s Mark = %d\n",a[i].num,a[i].s);
	fun(a,&m);
	printf("*****The RESULT *****\n");
	printf("the lowest:	%s,%d\n",m.num,m.s);

}

