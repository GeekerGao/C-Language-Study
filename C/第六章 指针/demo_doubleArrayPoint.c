#include <stdio.h>

int main()
{
	int arr[3][4] = {{11,22,33,44},{12,13,15,16},{22,66,77,88}};
	
	printf("arr是父亲地址：%p,偏移1后是%p\n",arr, arr+1);
	printf("arr[0]是子数组地址；%p,偏移1后是%p\n",arr[0],arr[0]+1);
	printf("arr[0]是子数组地址；%p,偏移1后是%p\n",*(arr+0),*(arr+0)+1);
}