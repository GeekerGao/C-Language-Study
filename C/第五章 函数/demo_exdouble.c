#include <stdio.h>

void printArryDouble(int arr[][4],int ihang, int ilie )
{
	int i;
	int j;
	for(i=0;i<ihang;i++){
		for(j=0;j<ilie;j++){
			printf("%d ",arr[i][j]);
		}
		
		putchar('\n');
	}
}
void initArryDouble(int arr[][4],int ihang, int ilie)
{
	int i;
	int j;
	for(i=0;i<ihang;i++){
		for(j=0;j<ilie;j++){
			printf("�������%d�У���%d�е�����\n",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
int getMaxDataFromArryDouble(int arr[][4],int ihang, int ilie)
{
	int i;
	int j;
	int max;
	
	max = arr[0][0];
	for(i=0;i<ihang;i++){
		for(j=0;j<ilie;j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
		}
	}
	
	return max;
}

int main()
{
	int max;
	int arr[3][4];//�����һά���飬ÿ��Ԫ������һ�����飬��Сȷ��
	
	initArryDouble(arr,3,4);
	printArryDouble(arr,3,4);

	max = getMaxDataFromArryDouble(arr,3,4);
	//max = getMaxDataFromArryDouble(&arr[0][0],3,4);
	printf("��ά����������ֵ��%d\n",max);
	return 0;
}