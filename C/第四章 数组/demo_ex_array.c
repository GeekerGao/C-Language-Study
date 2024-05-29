#include <stdio.h>

int main()
{
	int arr[10];
	int i;
	
	for(i=0;i<10;i++){
		arr[i] = i;
	}
	puts("当前数组是");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
		
	}
	
	puts("逆序输出后是：\n");
		
	for(i=9;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}