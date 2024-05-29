#include <stdio.h>

int main()
{
	int array[] = {12,8,13,9,110,34,1,90,85,101,13,13};
	int i;
	int j;
	int tmp;
	int len = sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<len-1;i++){
		for(j=0; j<len-1-i;j++){
			if(array[j] > array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
