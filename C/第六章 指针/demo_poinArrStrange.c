#include <stdio.h>

int main()
{
	int arr[3] = {1,2,3};
	int *p = arr;
	
	printf("sizeof arr is %d\n",sizeof(arr));//3*4=12
	printf("sizeof arr is %d\n",sizeof(p));//os ��8���ֽڱ�ʾһ����ַ
	printf("sizeof int is %d\n",sizeof(int));
	printf("sizeof pointer is %d\n",sizeof(int*));//os ��8���ֽڱ�ʾһ����ַ
	printf("sizeof pointer is %d\n",sizeof(char *));//os ��8���ֽڱ�ʾһ����ַ
	//printf("%d ",p[2]);
	printf("%d \n",*arr);
	for(int i = 0; i<3; i++){
		printf("%d ",p[i]);
	}
	putchar('\n');
	for(int i = 0; i<3; i++){
		printf("%d ",*(arr+i));
	}
	putchar('\n');
	/*
	for(int i = 0; i<3; i++){
		printf("%d ",*arr++);//���벻����ָ�볣��
	}*/
	putchar('\n');
	return 0;
}