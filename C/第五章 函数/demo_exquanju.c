#include <stdio.h>

int max;
int min;

float getResult(int arr[], int len)
{
	int i;
	int sum = 0;
	max = min = arr[0];
	for(i=0;i<len;i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
		sum += arr[i];
	}
	
	return (float)sum/len;
}

int main()
{
	int scores[] = {66,87,98,35,65,78,99,31,59,100};
	float aver;
	
	aver = getResult(scores,sizeof(scores)/sizeof(scores[0]));
	printf("�༶����߷��ǣ�%d\n��ͷ���%d\nƽ������%.2f\n",max,min,aver);
	return 0;
}