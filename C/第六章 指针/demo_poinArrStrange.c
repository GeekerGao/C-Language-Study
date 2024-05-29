#include <stdio.h>

int main()
{
	int arr[3] = {1,2,3};
	int *p = arr;
	
	printf("sizeof arr is %d\n",sizeof(arr));//3*4=12
	printf("sizeof arr is %d\n",sizeof(p));//os 用8个字节表示一个地址
	printf("sizeof int is %d\n",sizeof(int));
	printf("sizeof pointer is %d\n",sizeof(int*));//os 用8个字节表示一个地址
	printf("sizeof pointer is %d\n",sizeof(char *));//os 用8个字节表示一个地址
	//printf("%d ",p[2]);
	printf("%d \n",*arr);
	for(int i = 0; i<3; i++){
		printf("%d ",p[i]);
	}
	putchar('\n');
	for(int i = 0; i<3; i++){
		printf("%d ",*(arr+i));
	}
	putchar('\n');
	/*
	for(int i = 0; i<3; i++){
		printf("%d ",*arr++);//编译不过，指针常量
	}*/
	putchar('\n');
	return 0;
}