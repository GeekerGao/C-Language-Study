#include <stdio.h>

//三要素： 返回值，参数列表，功能
int add(int data1, int data2, int data3)//函数原型
{
	int ret;
	
	ret = data1 + data2 + data3;
	
	return ret;
}

int main()
{
	int x;
	int y;
	int z;
	int fret;
	//int ret;
	
	puts("请输入一个数：");
	scanf("%d",&x);
	puts("请再输入一个数：");
	scanf("%d",&y);
	puts("请再输入一个数：");
	scanf("%d",&z);
	fret = add(x,y,z)+100;
	printf("%d+%d+%d=%d\n",x,y,z,add(x,y,z));
	printf("FRET=%d\n",fret);
	return 0;
}