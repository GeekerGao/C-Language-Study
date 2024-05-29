#include <stdio.h>

int a = 10;
int b = 20;//全局变量，写在所有函数之前的外部变量
//程序员编程便捷，但有隐藏风险！所有的函数都可以操作这个变量

void fun1(int data)
{
	printf("fun1:%d\n",a);
	printf("fun1:%d\n",b);
}

int p = 100;
int q = 90;//外部变量，之后的所有函数可以用，之前的不能用
void fun2()
{
	printf("fun2:%d\n",p);
	printf("fun2:%d\n",a);
}
int main()
{
	int data = 100;
	fun1(data);
	fun2();
	printf("main:%d\n",p);
	printf("main:%d\n",b);
	return 0;
}