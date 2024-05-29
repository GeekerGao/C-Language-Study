#include <stdio.h>

void printWelcome()
{
	printf("========================\n");
	printf("欢迎来到我的程序，baby\n");
	printf("========================\n");
}
//数据和值
int getDataFromX(int x)//形式参数，需要包含变量类型，变量名（）
{
	int y;
	y = x-1;
	
	return y; 
}

int main()
{
	int x;
	int y;
	
	printWelcome();
	puts("请输入一个数：");
	scanf("%d",&x);
	y = getDataFromX(x);
	y = getDataFromX(x+1);
	y = getDataFromX(100);
	printf("x=%d，y=%d\n",x,y);
	return 0;
}