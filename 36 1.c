#include "stdio.h"
#define M 5
void main()
{
	int xx[][M]={{1,2,3,4,5},{4,3,2,1,0},{6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7}};//���˸� M  �����ϸ������� Ӧ�ö���MΪ�
	int i,j,sum=0;//��ʼ��sum ��
	printf("%d��%d�о���Ϊ:\n",M,M);
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%d ",xx[i][j]);//  ��%f��Ϊ%d,�ټ���һ���ո�
		printf("\n");
	}
	for(i=0;i<M;i++)
		sum+=xx[i][i]+xx[i][M-i-1];//���˸�1  (#^.^#)��
	printf("�����Խ�����Ԫ��֮��Ϊ��%d\n",sum);
}