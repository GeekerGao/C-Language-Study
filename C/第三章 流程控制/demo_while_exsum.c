#include <stdio.h>

int main()//3�����ʽ
{
	int sum;//������ó�ʼ����0 ������ϰ��
	int data = 1;//��һ�����ʽ�������ĳ�ʼֵ

	while(data <= 100)//�ڶ������ʽ���������ٽ�ֵ){
		sum = sum + data;
		data++;//���������ʽ�����������仯
	}
	printf("0��100�ĺ��ǣ�%d\n",sum);
	
	return 0;
}