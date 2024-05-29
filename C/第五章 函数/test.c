#include <stdio.h>
#include <string.h>

int main()
{
	char *p;
	char *p2 = NULL;
	printf("code pos 1\n");
	strcpy(p,"chenlichen handsome");
	printf("code pos 2\n");
	*p2 = 'c';
	return 0;
}