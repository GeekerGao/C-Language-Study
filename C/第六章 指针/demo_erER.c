#include <stdio.h>


int main()
{
	int scores[3][4]={
		{55,66,77,88},
		{66,55,99,100},
		{11,22,33,59},
	};//int (*p)[4];
	int (*p2)[4] = scores;
	
	int **p; 
	p = scores;  //������⣡
	printf("scores:%p\n",scores);
	printf("p=%p\n",p);
	printf("*p=%p\n",*p);//*p��һ��Ұָ�룬����������Ϊ�Ļ����е�ַ
	printf("*score=%p\n",*scores);//*p��һ��Ұָ�룬����������Ϊ�Ļ����е�ַ
	
	**p = 100;
	printf("done\n");
	
	int **p3 = &p2;//����
	**p3 = 100;//�ܸĵĶ�������һ�㲻��ô����
	printf("%d\n",scores[0][0]);
	return 0;
}