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
	printf("��������ֵ:\n");
	scanf("%d%d",pm,pn);
	puts("done!");
}
//arr��arr[0]
int main()
{
	int arr[3][4] = {{11,22,33,44},{12,13,15,16},{22,66,77,88}};//arr+
	int ihang,ilie;
	int data;
	
	//1. ��ʾ�û���������ֵ
	tipsInputHangLie(&ihang,&ilie);
	//2. �ҳ���Ӧ����ֵ���Ǹ���
	data = getTheData(arr,ihang,ilie);
	//3. ��ӡ����
	printf("%d��%d�е�ֵ��%d\n",ihang,ilie,data);
}