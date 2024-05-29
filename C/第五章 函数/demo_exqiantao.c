#include <stdio.h>

int getTheBigFromTwo(int data1, int data2)
{
	int bigger;
	bigger = data1>data2 ? data1:data2;
	
	return bigger; 
}
int getMaxDataFromFour(int a, int b, int c, int d)
{
	int max;
	max = getTheBigFromTwo(a,b);
	max = getTheBigFromTwo(max,c);
	max = getTheBigFromTwo(max,d);
	
	return max;
}
int main()
{
	int data1;
	int data2;
	int data3;
	int data4;
	int theBigOne;
	
	puts("please Input Four nums:");
	scanf("%d%d%d%d",&data1,&data2,&data3,&data4);
	theBigOne = getMaxDataFromFour(data1,data2,data3,data4);
	printf("the biggest is %d\n",theBigOne);

	return 0;
}