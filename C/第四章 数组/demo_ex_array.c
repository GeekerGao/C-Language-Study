#include <stdio.h>

int main()
{
	int arr[10];
	int i;
	
	for(i=0;i<10;i++){
		arr[i] = i;
	}
	puts("��ǰ������");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
		
	}
	
	puts("����������ǣ�\n");
		
	for(i=9;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}