#include <stdio.h>

int a = 10;
int b = 20;//ȫ�ֱ�����д�����к���֮ǰ���ⲿ����
//����Ա��̱�ݣ��������ط��գ����еĺ��������Բ����������

void fun1(int data)
{
	printf("fun1:%d\n",a);
	printf("fun1:%d\n",b);
}

int p = 100;
int q = 90;//�ⲿ������֮������к��������ã�֮ǰ�Ĳ�����
void fun2()
{
	printf("fun2:%d\n",p);
	printf("fun2:%d\n",a);
}
int main()
{
	int data = 100;
	fun1(data);
	fun2();
	printf("main:%d\n",p);
	printf("main:%d\n",b);
	return 0;
}