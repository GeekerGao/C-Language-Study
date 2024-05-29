#include <stdio.h>

/*
	跟printf的区别
	1. 自动加入换行符
	2. printf支持多种花样输出，而puts就是输出字符串
*/

int main()
{
	char c;
	
	puts("请输入一个字符");
	c = getchar();
	puts("你输入的字符是");
	putchar(c);
	return 0;
}