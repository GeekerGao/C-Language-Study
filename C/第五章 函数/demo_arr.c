#include <stdio.h>

void printData(int data)
{
	printf("%d\n",data);
}

void printArr(int arry[], int len)//�β��в���������ĸ������������Լ��������Ĵ�С��Ҳ��Ч.
							//������һ����ַ����������׵�ַ
{
	int i;
	//printf("printArr: arry�Ĵ�С�ǣ�%d\n",sizeof(arry));//��os��8���ֽ�����ʾһ����ַ
	for(i=0;i<len;i++){
		printf("%d ",arry[i]);
	}
	putchar('\n');
}
int main()
{
	int len;
	int arry[5] = {3,4,5,6,7};
	len = sizeof(arry)/sizeof(arry[0]);
	printf("main: arry�Ĵ�С�ǣ�%d\n",sizeof(arry));
	printArr(&arry[0],len);//��һ��Ԫ�صĵ�ַҲ��������׵�ַ
	printArr(arry,len);//��������������������׵�ַ
	return 0;
}