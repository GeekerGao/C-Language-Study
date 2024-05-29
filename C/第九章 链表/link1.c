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

	printf("use t1 to print nums!\n");
	printf("%d %d %d %d\n",t1.data,t1.next->data,t1.next->next->data,t1.next->next->next->data);
	printLink(&t1);

	return 0;
}
