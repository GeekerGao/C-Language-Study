#include <stdio.h>

void printArryDouble(int arr[2][])
{
	int i;
	int j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		
		putchar('\n');
	}
}

int main()
{
	int arr[2][3] = {{1,2,3},{11,22,33}};//�����һά���飬ÿ��Ԫ������һ�����飬��Сȷ��
	printArryDouble(arr);
	return 0;
}