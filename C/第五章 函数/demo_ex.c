#include <stdio.h>

float getBigDataFromTwo(float x, float y)
{
	//int z;
	/*
	if(x > y){
		z = x;
	}else{
		z = y;
	}
	*/
	//z = x>y?x:y;
	return x>y?x:y;
	//return z;
}

int main()
{
	float data1;
	float data2;
	float bigOne;
	//����������
	//��ʾ����
	puts("��������������");
	//��ȡ����
	scanf("%f%f",&data1,&data2);
	//��������
	bigOne = getBigDataFromTwo(data1, data2);
	//������
	printf("����������%.2f,%.2f�������ǣ�%.2f\n",data1,data2,bigOne);
	return 0;
}