#include <stdio.h>

int main()
{
	int i;
	int j;
	int data = 0;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",data++);
			printf("i=%d,j=%d\n",i,j);
		}	
	}
	return 0;
}