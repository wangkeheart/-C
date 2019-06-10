/*#include "stdio.h"
int main ( )
{
register int temp, i;
for ( i=0; i<=30000; i++ )
for ( temp=0; temp<=100; temp++ ) ;
printf ("ok\n");
}*/


//使用以上代码会让程序计算速度加快。它的原理是直接存储在CPU中的寄存器中.
/*
前者使用了两个寄存器变量，后者使用了两个自动变量程序除此之外完全一样。但
运行时感觉的执行速度是不同的，前者使用寄存器变量的程序要比后者使用自动变
量的程序要快。如果在Tubro C的环境下运行程序2，则应该将编译器优化选
项"use register variable"开关关上（OFF），否则，编译器自动优化程序使用寄
存器，两个程序会得到相同的结果。
*/
/* 程序2 */
#include <stdio.h>
main( )
{
int temp, i;
for ( i=0; i<=30000; i++ )
for ( temp=0; temp<=100; temp++ ) ;
printf ("ok\n");
}