#include <stdio.h>

int main()
{
	int healtyYesOrNot;
	int handsomeYesOrNot;
	int richYesOrNot;
	int daFangYesOrNot;
	
	puts("������ò�");
	scanf("%d",&healtyYesOrNot);
	
	if(healtyYesOrNot == 1){
		puts("����Ǯ����˧��˧��tips:��������������");
		scanf("%d%d",&handsomeYesOrNot,&richYesOrNot);
		if( handsomeYesOrNot == 1 && richYesOrNot == 1){
			puts("��Ը����һ�Ǯ��");
			scanf("%d",&daFangYesOrNot);
			if(daFangYesOrNot == 1){
				printf("����xx\n");
			}else{
				printf("�Բ����Ҳ���С�������ѣ���Ȼ��˧��Ǯ�����壬�����������лл\n");
			}
		}else{
			printf("���ǲ��������ѣ���Ҫ��˧����Ǯ��\n");
		}
	}else{
		printf("���ǲ��������ѣ������ܶ��������㲻��\n");
	}
	return 0;
}