#include <stdio.h>
#include <string.h>
#include <assert.h>

int myStrcmp(char *str1, char *str2)
{
	int ret = 0;
	int n_str1 = 0;
	int n_str2 = 0;
	char *bakStr1 = str1;
	char *bakStr2 = str2;

	while( *str1 && *str2 && (*str1 == *str2)){
		str1++;
		str2++;
	}
	if(*str1 || *str2){
		str1 = bakStr1;
		str2 = bakStr2;
		while(*str1){
			n_str1 += *str1;
			str1++;
		}
		while(*str2){
			n_str2 += *str2;
			str2++;
		}
	}
	ret = n_str1 - n_str2;
	if(ret < 0){
		ret = -1;
	}
	if(ret > 0){
		ret = 1;
	}
	return ret;
}
int main()
{
	char *p1 = "chmnlichend";
	char *p2 = "chenlzchend";

	int ret = myStrcmp(p1,p2);//-1 1 0
	if(ret == 0){
		puts("两个字符串一样");
	}
	printf("RET = %d\n",ret);
	return 0;
}