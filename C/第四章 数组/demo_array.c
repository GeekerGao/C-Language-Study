#include <stdio.h>

int main()
{
	//int a[10] = {1,2,3,4,5,6,7,8,9,10};//这边的10表示大小
	int a[10] = {1,2,3};//这边的10表示大小
	int data;
	int array[] = {100,444,55,66,77,88,99,9};
	int size;
	
	int b[10] = {0};
		//把整个数组的大小，除以数组中一个元素的大小，就获得总个数
	size = sizeof(array)/sizeof(array[0]);//sizeof关键字，能计算括号中对应数据的内存空间大小。
	printf("array的个数有：%d\n",size);
	for(data = 0; data < size; data++){
		printf("address: %p, data:%d\n",&array[data],array[data]);
	}

	return 0;
}