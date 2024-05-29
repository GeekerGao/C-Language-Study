#include <stdio.h>

int main()
{
	int data[] = {1,2,3,4,5};
	char cdata[] = {'h','e','l','l','o'};
	char cdata2[] = "hello";
	char *pchar = "hello";//字符串常量，不允许被修改
	char c = 'c';
	
	char *p;//野指针，并没有明确的内存指向，危险
	
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