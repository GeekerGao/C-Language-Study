#include <stdio.h>

struct Test
{
	int idata;
	char cdata;
	char arrData[32];
	void (*pprintInfo)(int idata, 
		char cdata, char *arry);
};


void printInfo(int idata, 
		char cdata, char *arry)
{
	printf("%d %c %s\n",idata,cdata,arry);
	
}

int main()
{
	struct Test t1 = {
		.idata = 10,
		.arrData = "hello",
		.pprintInfo = printInfo
	};

	t1.pprintInfo(t1.idata,t1.cdata,t1.arrData);
	return 0;
}