#include <stdio.h>

int main()
{
	int i;
	int j;
	int hang;
	int lie;
	int arry[3][4] = {{1,12,23,84}
					,{15,116,347,68}
					,{99,110,131,121}};
	int max;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d \t",arry[i][j]);
		}
		printf("\n");
	}
	
	max = arry[0][0];//�����ߵ��Ǹ����ӣ��ȼ�¼��һ������ս�ĺ��ӵ������ֽ��
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max < arry[i][j]){//���ֽ�ϼ�¼����߱ȵ�ǰ���С�����߰�������д���µ����
				max = arry[i][j];
				hang = i;
				lie = j;
			}
		}
	}
	printf("������%d�е�%d�е���%d���\n",hang+1,lie+1,max);
	return 0;
}