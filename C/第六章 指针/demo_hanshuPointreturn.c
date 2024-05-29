#include <stdio.h>

int* getPosPerson(int pos, int (*pstu)[4])//函数指针，返回指针的函数
{
	int *p;
	p = (int *)(pstu+pos);
	return p;
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
	printf("请输入你需要看的学生号数：0,1,2\n");
	scanf("%d",&pos);
	
	ppos = getPosPerson(pos, scores);
	for(int i=0;i<4;i++){
		printf("%d ",*ppos++);
	}
	return 0;
}