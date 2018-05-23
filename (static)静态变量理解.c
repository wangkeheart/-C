#include<stdio.h>
int fun(int n)
{
    static int f=1;
    f=f*n;
    return f;
}
void main()
{
    int i;
    for(i=1;i<=5;i++)
    printf("fun(%d)=%d\n",i,fun(i));
}

/*
	这里的运行结果是：
fun(1)=1
fun(2)=2
fun(3)=6
fun(4)=24
fun(5)=120
*/
/*(#include<stdio.h>
int fun(int n)
{
    int f=1;
    f = f * n;
    return f;
}
void main()
{
    int i;
    for(i=1;i<=5;i++)
        printf("fun(%d)=%d\n",i,fun(i));
}*/
/*程序的运行结果是：
fun(1)=1
fun(2)=2
fun(3)=3
fun(4)=4
fun(5)=5
*/