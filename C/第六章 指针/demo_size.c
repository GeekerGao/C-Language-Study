#include <stdio.h>

int main()
{
	
	int a = 0x1234;
	int *p = &a;
	char *c = &a;
	
	printf("p = %p\n",p);
	printf("c = %p\n",c);
	
	
	printf("a = %x\n",*p);//ȡֵ��ʱ��������⣬ȡֵ����������ָ��������ͣ����ʲ�ͬ��С�Ŀռ�
	printf("a = %x\n",*c);
	
	
	printf("++p = %p\n",++p);
	printf("++c = %p\n",++c);
	return 0;
}