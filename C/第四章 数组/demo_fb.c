#include <stdio.h>

int main()
{
	int arr[30];
	int i;
	int arraySize;
	arraySize = sizeof(arr)/sizeof(arr[0]);
	
	arr[0] = 0;
	arr[1] = 1;
	for(i=2;i<arraySize;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	
	for(i=0;i<arraySize;i++){
		printf("%d ",arr[i]);
	}
	printf("\ndone\n");
	return 0;
}