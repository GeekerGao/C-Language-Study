#include <stdio.h>
#include <assert.h>
char* myStrcpy(char *des, char *src)
{
	//assert 的作用是现计算表达式 expression ，如果其值为假（即为0），
	//那么它先向 stderr 打印一条出错信息,然后通过调用 abort 来终止程序运行
	assert(des != NULL && src != NULL);//断言,
	
	char *bak = des;
	
	while( *src != '\0'){
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';
	
	return bak;
}

char* myStrcpy2(char *des, char *src)
{
	if(des == NULL || src == NULL){
		return NULL;
	}
	char *bak = des;
	
	while( *src != '\0'){
		*des++ = *src++;
	}
	*des = '\0';
	
	return bak;
}
char* myStrcpy3(char *des, char *src)
{
	if(des == NULL || src == NULL){
		return NULL;
	}
	char *bak = des;
	
	while( (*des++ = *src++) != '\0');
	*des = '\0';
	
	return bak;
}


char* myStrncpy(char *des, char *src, int count)
{
	if(des == NULL || src == NULL){
		return NULL;
	}
	char *bak = des;
	
	while( *src != '\0' && count>0){
		*des++ = *src++;
		count--;
	}
	if(count > 0){
		while(count > 0){
			count--;
			*des++ = '\0';
		}
		return des;
	}
	*des = '\0';
	
	return bak;
}


int main()
{
	char str[128] = {'\0'};
	char *pstr = NULL;
	char a = 'm';
	char b;
	if((b=a) == 'm'){
		printf("ok\n");
	}
	char *p = "chenlichen handsome";
	myStrcpy(pstr, p);
	puts(str);
	return 0;
}