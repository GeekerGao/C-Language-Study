#include <stdio.h>

//arr，arr[0]
int main()
{
	int arr[3][4] = {{11,22,33,44},{12,13,15,16},{22,66,77,88}};//arr+
	int i,j;
	int *p;//p++
//	p = &arr[0][0];
	//p = arr;
	//能不能定义一个指针，让指针偏移的时候，也偏移对应大小的数组？
	//数组指针，定义一个指针，指向一个数组！
	//数组指针才是真正等同于二维数组名
	int (*p2)[4];
	p2 = arr;
//	printf("p2=%p\n",p2);
//	printf("++p2=%p\n",++p2);
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\n",*(*(p2+i)+j));
		}
		
	}
}