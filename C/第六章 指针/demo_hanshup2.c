#include <stdio.h>

int inCData(int data)
{
	return ++data;
}
void printWelcome()
{
	puts("程序启动，欢迎使用\n");
}
int main()
{
	void (*p)();//定义一个函数指针变量
	int (*p2)(int data);
	
	p = printWelcome;//指向函数
	p2 = inCData;

	(*p)();//调用
	printf("p2测试：%d\n",(*p2)(10));
	return 0;
}