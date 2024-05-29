#include <stdio.h>
#include <stdlib.h>

int getMax(int data1, int data2)
{
	return data1>data2?data1:data2;
}

int getMin(int data1, int data2)
{
	return data1<data2?data1:data2;
}

int getSum(int data1, int data2)
{
	return data1+data2;
}

int getRet(int a, int b, int (*p)(int,int))
{
	return (*p)(a,b);
}
int main()
{
	int a = 10;
	int b = 20;
	int ret;
	
	int (*p[3])(int, int) ={getMax,getMin,getSum};
	
	for(int i= 0; i<3;i++){
		ret = (*(p[i]))(a,b);
		printf("ret = %d\n",ret);
	}
	
	return 0;
}