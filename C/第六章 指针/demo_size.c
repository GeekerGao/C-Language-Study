#include <stdio.h>

int main()
{
	
	int a = 0x1234;
	int *p = &a;
	char *c = &a;
	
	printf("p = %p\n",p);
	printf("c = %p\n",c);
	
	
	printf("a = %x\n",*p);//取值的时候出了问题，取值运算符会根据指针变量类型，访问不同大小的空间
	printf("a = %x\n",*c);
	
	
	printf("++p = %p\n",++p);
	printf("++c = %p\n",++c);
	return 0;
}