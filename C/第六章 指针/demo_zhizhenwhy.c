#include <stdio.h>

void changData(int data, int data2)
{
	int tmp;
	tmp   = data;
	data  = data2;
	data2 = tmp;
}
int main()
{
	int data  = 10;
	int data2 = 20;
	
	
	printf("����ǰ��data=%d,data2=%d\n",data,data2);
	
	changData(data,data2);
	
	printf("������data=%d,data2=%d\n",data,data2);
}