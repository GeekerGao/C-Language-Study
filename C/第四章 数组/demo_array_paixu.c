#include <stdio.h>

int main()
{
	int array[] = {12,8,13,9,223,44,5,66,7,88};
	int i;
	int j;
	int tmp;
	int len = sizeof(array)/sizeof(array[0]);
	
	//ºÚµ•—°‘Ò≈≈–Ú∑®
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(array[i] > array[j]){
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}

	for(i=0;i<len;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
