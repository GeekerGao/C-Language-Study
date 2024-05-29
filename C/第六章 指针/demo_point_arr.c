#include <stdio.h>

int main()
{
	
	int arr[3] = {1,2,3};
	int *p;

	//p = &arr[0];//数组的首地址就是首个元素的地址
	p = arr;//数组名就是数组的首地址
	for(int i = 0; i<3; i++){
		//printf("address:0x%p,%d ",(p+i),*(p+i));
		printf("%d ",*p);
		p++;
	}
	p = arr;
	for(int i = 0; i<3; i++){
		//printf("address:0x%p,%d ",(p+i),*(p+i));
		printf("%d ",*p++);
	}
	/*
	printf("0元素是：%d\n",*(p+0));
	printf("1元素是：%d\n",*(p+1));
	printf("2元素是：%d\n",*(p+2));
	*/
	return 0;
}