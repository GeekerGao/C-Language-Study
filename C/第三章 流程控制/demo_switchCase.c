#include <stdio.h>

int main()
{
	int data;
	char cdata;
	printf("������һ������\n");

	scanf("%d",&data);
	
	switch(data){
		case 1:
		case 2:
		case 4:
		case 5:
		case 3:
			puts("����������1,2,3,4,5�����");
			break;
	
		case 8:
			puts("����������5�����");
			break;
		default:
			puts("�������б��е����");	
	}
	
		
	printf("������һ���ַ���\n");

	getchar();
	scanf("%c",&cdata);
	
	switch(cdata){
		case 'a':
			puts("����������a�����");
			break;
		case 'b':
			puts("����������b�����");
			break;
		default:
			puts("�������б��е����");	
	}
	
	return 0;
}