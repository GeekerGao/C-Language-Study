#include <stdio.h>
#include <stdlib.h>

int getMax(int data1, int data2)
{
	return data1>data2 ? data1:data2;
}

int getMin(int data1, int data2)
{
	return data1<data2 ? data1:data2;
}

int getSum(int data1, int data2)
{
	return data1+data2;
}
int main()
{	
	int a = 10;
	int b = 20;
	int ret;
	
	int (*pfunc[3])(int , int )={
		getMin,
		getMax,
		getSum};//函数指针数组！
	
	for(int i=0;i<3;i++){
		ret = (*pfunc[i])(a,b);
		printf("ret = %d\n",ret);
	}
	
	return 0;
}