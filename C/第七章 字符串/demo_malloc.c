#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char *strcpy(char* dest, const char *src);
int main()
{
	char *p;//Ұָ��
	p = (char *)malloc(1);//p���˾�����ڴ�ָ��
	
	*p = 'c';
	free(p);//��̬���ٺ�����ָ�򣬼ǵ��ͷš���Ȼ�����ڴ�й¶�ķ���
	p = NULL; //free֮����ָ��ָ��NULL����ֹ����ָ��
	p = (char *)malloc(12); //����12�ֽڵ��ڴ�ռ�
	if(p == NULL){          //ͨ������ϰ�߶�malloc����ֵ��NULL�жϣ�����ʧ����
		printf("malloc error\n");
		exit(-1);
	}
	memset(p,'\0',12);   //�ڴ�ռ��ʼ��
	printf("���ݵ�ַ��%x\n",p);
	int len = strlen("chenlichen2342354364575467");
	int newLen = len - 12 + 1;
	p = realloc(p,newLen); //����
	printf("���ݺ��ַ��%x\n",p);
	strcpy(p,"chenlichen2342354364575467");
	puts(p);
	puts("end");
	return 0;
}