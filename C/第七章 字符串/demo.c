#include <stdio.h>

int main()
{
	int data[] = {1,2,3,4,5};
	char cdata[] = {'h','e','l','l','o'};
	char cdata2[] = "hello";
	char *pchar = "hello";//�ַ����������������޸�
	char c = 'c';
	
	char *p;//Ұָ�룬��û����ȷ���ڴ�ָ��Σ��
	
	*p= 'a';
	
	
	cdata2[3] = 'm';
	printf("%s",cdata2);
	putchar('\n');
	puts(cdata2);
	*pchar = 'm';
	puts("end");
	/*
	int i;
	for(i=0;i<5;i++){
		printf("%c",*(pchar+i));
	}*/
	return 0;
}