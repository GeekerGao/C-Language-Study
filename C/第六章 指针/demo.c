#include <stdio.h>

int main()
{
	int a = 10;
	printf("a=%d\n",a);
	printf("a的地址是：0x%p\n",&a);
	printf("a=%d\n",*(&a));//取值运算符，他把后面跟的内存地址中的数据”取出来“
	return 0;
}