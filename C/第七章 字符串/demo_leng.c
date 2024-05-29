#include <stdio.h>
#include <string.h>

//strcpy strcmp strcat strstr
int main()
{
	//字符串和字符数组的区别；
	int data[] = {1,2,3,4,5};
	//请计算数组data的元素个数
	char cdata[6] = {'h','e','l','l','o'};//字符串的结束标志'\0'
	char cdata2[] = "hello";
	
	int len = sizeof(data)/sizeof(data[0]);
	printf("len = %d\n",len);
	
	len = sizeof(cdata2)/sizeof(cdata2[0]);
	printf("len = %d\n",len);
	
	len = sizeof(cdata)/sizeof(cdata[0]);
	printf("len = %d\n",len);
	
	printf("%s\n",cdata);
	
	return 0;
}