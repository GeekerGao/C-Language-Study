#include <stdio.h>
#include <string.h>
int main()
{
	char *p = "chenlichen handsome";
	char str[128] = {'\0'};
	

	puts(p);
	printf("%s\n",p);
	
	puts("ÇëÊäÈë×Ö·û´®");
	//scanf("%s",str);
	//gets(str);
	//strcpy(str,p);
	strncpy(str,p,6);
	puts(str);
	return 0;
}