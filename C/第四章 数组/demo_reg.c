#include <stdio.h>

int main()
{
	int a[10];//��ߵ�10��ʾ��С
	int data;

	/*��
	a[0] = 100;
	a[1] = 102;
	a[2] = 1110;
	a[3] = 250;
	*/
	
	
	for(data = 0; data < 10; data++){
		a[data] = data+100; 
	}

	puts("�����ʼ�����");
	for(data = 0; data < 10; data++){
		printf("address: %p, data:%d\n",&a[data],a[data]);
	}
	puts("done");
	return 0;
}