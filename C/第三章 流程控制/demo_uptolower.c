#include <stdio.h>

int main()
{
	char cdata;
	
	//1. ����һ���ַ�
		//��ʾ����
	printf("������һ���ַ�\n");
		//��ȡ����
	scanf("%c",&cdata);
	//2. �ж�����ַ��ǲ���Сд��ĸ
		//2.1 �����Сд��ĸ
	if( cdata >= 97 && cdata <= 122 ){
		//ֱ�����
		printf("%c",cdata);
	}else if( cdata >= 65 && cdata <=90){//����  ����ͼ ��ͼ
				
		//ת����Сд��ĸ�����
		printf("%c",cdata+32);
	}else{
		printf("��������ȷ���ַ�\n");
	}
	//3. �������
	printf("\ndone!\n");
	return 0;
}