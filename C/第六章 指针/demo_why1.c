#include <stdio.h>

void chageData(int *pdata, int *pdata2)
{
	int tmp;
	tmp   = *pdata;
	*pdata  = *pdata2;
	*pdata2 = tmp;
}

int main()
{
	int data  = 10;
	int data2 = 20;
	
	printf("why point\n");
	printf("����ǰ��data=%d,data2=%d\n",data,data2);
	
	chageData(&data,&data2);
	
	printf("������data=%d,data2=%d\n",data,data2);
}