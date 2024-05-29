#include <stdio.h>
#include <string.h>
#include <assert.h>

char* myStrcat(char *des, char *src)
{
	assert( des!=NULL && src!=NULL);
	char *bak = des;
	
	while(*des){
		des++;
	}
	while((*des++ = *src++) != '\0');
	*des = '\0';
	
	return bak;
}
char* myStrcat2(char *des, char *src)
{
	char *bak = des;
	strcpy(des+strlen(des),src);
	return bak;
}

char* myStrcat3(char *des, char *src)
{
	assert( des!=NULL && src!=NULL);
	char *bak = des;
	
	for(;*des!='\0';des++);
	while((*des++ = *src++) != '\0');
	*des = '\0';
	
	return bak;
}
int main()
{
	char str[128] = "chenlichen";
	char *p2;
	char *p = " handsome";
	p2 = myStrcat(str,p);
	//p2 = strcat(str,p);
	puts(str);
	//puts(p2);
	return 0;
}