#include <stdio.h>

struct Test{
	int data;
	struct Test *next;
};

void printLink(struct Test *head)
{
	struct Test *point;
	point = head;
	while(point != NULL){
		printf("%d ",point->data);
		point = point->next;
	}
	putchar('\n');
}

int getLinkTotalNodeNum(struct Test *head)
{
	int cnt = 0;

	while(head != NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}
//²é
int searchLink(struct Test *head,int data)
{
	while(head != NULL){
		if(head->data ==data){
			return 1;
		}
		head = head->next;
	}
	return 0;
}

int main()
{
	struct Test t1 = {1,NULL};
	struct Test t2 = {2,NULL};
	struct Test t3 = {3,NULL};
	struct Test t4 = {4,NULL};
	struct Test t5 = {5,NULL};
	struct Test t6 = {6,NULL};
	
	t1.next = &t2;
	t2.next = &t3;
	t3.next = &t4;
	t4.next = &t5;
	t5.next = &t6;

	printLink(&t1);
	int ret = getLinkTotalNodeNum(&t1);
	printf("total num = %d\n",ret);
	ret = searchLink(&t1,1);
	if(ret == 0){
		printf("no 1\n");
	}else{
		printf("have 1\n");
	}
	if(ret == 0){
		printf("no 8\n");
	}else{
		printf("have 8\n");
	}

	return 0;
}
