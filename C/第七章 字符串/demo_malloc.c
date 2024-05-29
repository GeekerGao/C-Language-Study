#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char *strcpy(char* dest, const char *src);
int main()
{
	char *p;//野指针
	p = (char *)malloc(1);//p有了具体的内存指向
	
	*p = 'c';
	free(p);//动态开辟后重新指向，记得释放。不然存在内存泄露的风险
	p = NULL; //free之后让指针指向NULL，防止悬挂指针
	p = (char *)malloc(12); //开辟12字节的内存空间
	if(p == NULL){          //通常养成习惯对malloc返回值做NULL判断，申请失败了
		printf("malloc error\n");
		exit(-1);
	}
	memset(p,'\0',12);   //内存空间初始化
	printf("扩容地址：%x\n",p);
	int len = strlen("chenlichen2342354364575467");
	int newLen = len - 12 + 1;
	p = realloc(p,newLen); //扩容
	printf("扩容后地址：%x\n",p);
	strcpy(p,"chenlichen2342354364575467");
	puts(p);
	puts("end");
	return 0;
}