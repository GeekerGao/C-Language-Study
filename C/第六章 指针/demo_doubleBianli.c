#include <stdio.h>

//arr£¬arr[0]
int main()
{
	int arr[3][4] = {{11,22,33,44},{12,13,15,16},{22,66,77,88}};
	int i;
	int j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("add:0x%p,data:%d \n",&arr[i][j],arr[i][j]);
			printf("add:0x%p,data:%d \n",arr[i]+j,*(arr[i]+j));
			printf("add:0x%p,data:%d \n",*(arr+i)+j,*(*(arr+i)+j));
			printf("===========================================\n");
		}
		putchar('\n');
	}
	
}