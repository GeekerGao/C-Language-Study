#include <stdio.h>

int main()
{
	//什么是整型变量，存放整型数的变量
	//什么是字符变量，存放字符型数据的变量
	//什么是指针变量，存放指针的变量
	//什么是指针变量，存放地址的变量
	int a = 10;
	int *p;//这里的*是一个标识符，告诉系统我是一个指针变量，是用来保存别人地址的，和下方的运算服不同
	p = &a;
	printf("变量名访问a:%d\n",a);
	printf("a的地址是：0x%p\n",&a);
	printf("地址访问a:%d\n",*(&a));//取值运算符，他把后面跟的内存地址中的数据”取出来“
	printf("指针变量的方式访问a:%d\n",*p);
	return 0;
}