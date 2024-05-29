#include <stdio.h>

int getTheData(int (*p)[4],int hang,int lie)
{
	int data;
	data = *(*(p+hang)+lie);
	return data;
	//return p[hang][lie];
}
void tipsInputHangLie(int *pm, int *pn)
{
	printf("输入行列值:\n");
	scanf("%d%d",pm,pn);
	puts("done!");
}
//arr，arr[0]
int main()
{
	int arr[3][4] = {{11,22,33,44},{12,13,15,16},{22,66,77,88}};//arr+
	int ihang,ilie;
	int data;
	
	//1. 提示用户输入行列值
	tipsInputHangLie(&ihang,&ilie);
	//2. 找出对应行列值的那个数
	data = getTheData(arr,ihang,ilie);
	//3. 打印出来
	printf("%d行%d列的值是%d\n",ihang,ilie,data);
}