#include <stdio.h>

void changeData(int data)//数值传递，操作的是不同的内存空间
{
	data = data + 100;
	printf("address: %p,dataInfunc = %d\n",&data,data);
}

int main()
{
	int data = 10;
	changeData(data);
	printf("address: %p,data = %d\n",&data,data);
}