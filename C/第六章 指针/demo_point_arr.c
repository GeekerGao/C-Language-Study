#include <stdio.h>

int main()
{
	
	int arr[3] = {1,2,3};
	int *p;

	//p = &arr[0];//������׵�ַ�����׸�Ԫ�صĵ�ַ
	p = arr;//����������������׵�ַ
	for(int i = 0; i<3; i++){
		//printf("address:0x%p,%d ",(p+i),*(p+i));
		printf("%d ",*p);
		p++;
	}
	p = arr;
	for(int i = 0; i<3; i++){
		//printf("address:0x%p,%d ",(p+i),*(p+i));
		printf("%d ",*p++);
	}
	/*
	printf("0Ԫ���ǣ�%d\n",*(p+0));
	printf("1Ԫ���ǣ�%d\n",*(p+1));
	printf("2Ԫ���ǣ�%d\n",*(p+2));
	*/
	return 0;
}