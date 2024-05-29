#include <stdio.h>

void changeData(int data[])//操作一定是相同的内存空间，数组名当作实参，到底传了什么（地址）
{
	data[0] = data[0] + 100;
	printf("dataInFunc = %d\n",data[0]);
}

int main()
{
	int data[2] = {10,20};
	changeData(data);
	printf("data = %d\n",data[0]);
}