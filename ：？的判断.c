#include <stdio.h>
int main()
{
  int a,b;
  printf("please input a and b:\n");
  scanf("%d%d",&a,&b);
  printf("the output data is %d\n",a<b?b:a);  //:�������������ִ�к�ߵĸ�ֵ��
  return 0;
}