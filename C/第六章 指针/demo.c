#include <stdio.h>

int main()
{
	int a = 10;
	printf("a=%d\n",a);
	printf("a�ĵ�ַ�ǣ�0x%p\n",&a);
	printf("a=%d\n",*(&a));//ȡֵ����������Ѻ�������ڴ��ַ�е����ݡ�ȡ������
	return 0;
}