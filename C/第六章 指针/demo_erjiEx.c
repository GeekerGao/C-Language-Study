#include <stdio.h>

void getPosPerson(int pos, int (*pstu)[4],int **ppos)//����ָ�룬����ָ��ĺ���
{
	*ppos = (int *)(pstu+pos);
}

int main()
{
	int scores[3][4]={
		{55,66,77,88},
		{66,55,99,100},
		{11,22,33,59},
	};
	int *ppos;
	int pos;
	printf("����������Ҫ����ѧ��������0,1,2\n");
	scanf("%d",&pos);
	
	getPosPerson(pos, scores,&ppos);
	for(int i=0;i<4;i++){
		printf("%d ",*ppos++);
	}
	return 0;
}