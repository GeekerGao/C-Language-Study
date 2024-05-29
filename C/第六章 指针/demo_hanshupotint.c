#include <stdio.h>

void printWelcome()
{
	puts("程序启动，欢迎使用\n");
}
int main()
{
	int a = 10;
	int *pa;
	pa = &a;
	printf("%d\n",*pa);
	void (*p)();//定义一个函数指针变量
	p = printWelcome;//指向函数
	printWelcome();
	(*p)();//调用
	return 0;
}