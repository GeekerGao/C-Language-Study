#include <stdio.h>

int main()
{
	int data1;
	int data2;
	int datatmp;//������ô�������ݣ�data1���д�ŵľ���С��
	
	printf("��������������\n");
	scanf("%d%d",&data1,&data2);
	
	if(data1 > data2){
		//����
		printf("=====����\n");
		datatmp = data1;
		data1 = data2;
		data2 = datatmp;
	}
	
	printf("%d��%d\n",data1,data2);
	
}