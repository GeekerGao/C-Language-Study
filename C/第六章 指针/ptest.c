#include <stdio.h>

int main()
{
		int test[3][3]={12,33,44,55,66,77,88,99,991};
        int (*p)[3];
		int **p4 = &p;
		printf("test:%p\n",p);
		int *p3 = test;
		int m;
		for(m=0;m<12;m++){
			
			printf("%d ",*(p+m));
		}

        int **p2;
        p2 = test;
        printf("%d",**p2);    
        p = test;
        int i;
        int j;
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("data = %d\n",*(*(p+i)+j));
                }   
        }    

	
	return 0;
	
}