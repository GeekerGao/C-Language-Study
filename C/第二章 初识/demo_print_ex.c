#include <stdio.h>

int main()
{
	int data1 = 10; 
	int data2 = 6;
	float data4;
	
	int data3;
	
	printf("你看，这是我做的第一个不正经小的C程序，厉害不\n");
	printf("有两个原始数据%d,%d\n",data1, data2);
	data3 = data1 + data2;
	
	printf("那么这两数的和是%d\n",data3);
	data3 = data1 - data2;
	
	printf("那么这两数的差是%d\n",data3);
	
	data3 = data1 * data2;
	
	printf("那么这两数的积是%d\n",data3);
	
	data4 = (float)data1 / data2;
	
	printf("那么这两数的相除是%f\n",data4);
	
}