#include <stdio.h>
#include <string.h>

void test()
{
	
}
//strcpy strcmp strcat strstr
int main()
{
	char cdata[128] = "hello";//'\0'
	void (*ptest)();
	ptest = test;
	printf("sizeof :%d\n",sizeof(cdata));
	printf("strlen: %d\n",strlen(cdata));
	
	char *p = "hello";
	//p��һ��char *��sizeof�������ʱ�򣬵ó��Ǽ�����ö����ֽ�����ʾһ����ַ
	printf("sizeof:p      :%d\n",sizeof(p));
	printf("sizeof:char*  :%d\n",sizeof(char *));
	printf("sizeof:int*  :%d\n",sizeof(int *));
	printf("sizeof:char   :%d\n",sizeof(char));
	printf("sizeof:ptest   :%d\n",sizeof(ptest));
	printf("strlen        :%d\n",strlen(p));
	
	return 0;
}