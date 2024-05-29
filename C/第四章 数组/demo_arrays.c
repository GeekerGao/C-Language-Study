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
	
	max = arry[0][0];//身高最高的那个汉子，先记录第一个来挑战的汉子的身高在纸上
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max < arry[i][j]){//如果纸上记录的身高比当前这个小鬼的身高矮，重新写入新的身高
				max = arry[i][j];
				hang = i;
				lie = j;
			}
		}
	}
	printf("其中在%d行第%d列的数%d最大\n",hang+1,lie+1,max);
	return 0;
}