#include <stdio.h>

/* 
	author: chenlichen
	date: 2021.7.21
	funDescription:
	printfDemo
*/

int main()
{
	int a_data = 3; //c c++ java һ���ֺŴ���һ��������
	float f_data = 2.3;
	char c_data = '#';
	
	int data = 10;
	int chushu = 3;
	float result;
	
	result = (float)data/chushu; //ǿ��ת������������С��
	
	printf("��������ʲô��������cmd�ն˿��Կ���\n");
	printf("���εĶ��ǰ�����\n");
	
	printf("a=%d\n",a_data);   //ռλ��,����%��ͷ��ע���ǳ���Ա����������Ԥ�����ʱ�򣬻ᱻ���
						//sdfsdfsdf
	a_data = 100;  //0000 0000 0000 0000 0000 0000   0110 0100
	printf("�޸ĺ�:a=%d\n",a_data);
	printf("16�������a=0x%x\n",a_data);
	printf("��һ��С��f=%f\n",f_data);
	printf("��һ���ַ�c = %c\n",c_data);
	printf("a_data�ĵ�ַ��%p\n",&a_data);
	
	printf("result = %f\n",result);
	printf("result2 = %f\n",(float)data/chushu);
	
	return 0;
}