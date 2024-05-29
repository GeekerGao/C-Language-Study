#include <stdio.h>
#include <stdlib.h>

struct Test{
    int data;
    struct Test *next;
};
//遍历链表
void printLink(struct Test *head)
{
    struct Test *p = head;
    //判断头节点是否为空
    while(p != NULL){
        //打印数据
        printf("%d ",p->data);
        //循环遍历下一个节点
        p = p->next;
    }
    putchar('\n');
}
//统计链表节点个数
int getLinkTotalNum(struct Test *head)
{
    int cnt = 0;
    struct Test *p = head;
    while(p != NULL){
        cnt++;
        p = p->next;
    }
    return cnt;
}
//后增
int insertFromBehind(struct Test *head,int data,struct Test *new)
{
    struct Test *p = head;
    //判断头节点是否为空
    while(p != NULL){
    	//如果当前头节点数据就是要找的数据
        if(p->data == data){
            new->next = p->next;
            p->next = new;
            return 1;
        }
        //循环遍历下一个节点
        p = p->next;
    }
    return 0;
}
//前增
struct Test* insertFromBefore(struct Test *head,int data,struct Test *new)
{
    struct Test *p = head;
    //如果头节点数据就是要找的数据
    if(p->data == data){
        new->next = head;
        return new;
    }
    //当头节点的下一个不为空
    while(p->next != NULL){
    	//如果头节点的下一个的数据就是要找的数据
        if(p->next->data == data){
            new->next = p->next;
            p->next = new;
            printf("isnert ok!");
            return head;
        }
        //循环遍历下一个节点
        p = p->next;
    }
    printf("no this data:%d\n",data);
    return head;
}
//删
struct Test *deleteNode(struct Test *head,int data)
{
    struct Test *p = head;
    //如果头节点的数据就是要找到数据
    if(p->data == data){
        head = head->next;
        free(p);
        return head;
    }
    //当头节点的下一个不为空
    while(p->next != NULL){
    	//如果头节点的下一个的数据就是要找的数据
        if(p->next->data == data){
            p->next = p->next->next;
            return head;
        }
        //循环遍历下一个节点
        p = p->next;
    }
    return head;
}
//改
int gaiLink(struct Test *head,int data,int newdata)
{
    struct Test *p = head;
    //判断头节点是否为空
    while(p != NULL){
    	//如果头节点数据就是要找的数据
        if(p->data == data){
            p->data = newdata;
            return 1;
        }
        //循环遍历下一个节点
        p = p->next;
    }
    return 0;
}
//查
int searchLink(struct Test *head,int data)
{
    struct Test *p = head;
    //判断头节点是否为空
    while(p != NULL){
    	//如果头节点数据就是要找的数据
        if(p->data == data){
            printf("Your search data:%d\n",data);
            return 1;
        }
        //循环遍历下一个节点
        p = p->next;
    }
    printf("Sorry!The data you want to query has not been found in the database!\n");
    return 0;
}
//头插法
struct Test* insertFromHead(struct Test* head,struct Test* new)
{
	if(head == NULL){
		head = new;
	}else{
		new->next = head;
		head = new;
	}
	return head;
}
	
struct Test* createLink(struct Test* head)
{
	struct Test* new;

	while(1){
		new = (struct Test*)malloc(sizeof(struct Test));
		printf("input ypur new node data:\n");
		scanf("%d",&(new->data));
		if(new->data == 0){
			printf("0 quit\n");
			free(new);
			return head;
		}
		head = insertFromHead(head,new);
	}	
}
//尾插法
struct Test* insertBehind(struct Test* head,struct Test* new)
{
	struct Test* p = head;
	if(p == NULL){
		head = new;
		return head;
	}
	while(p->next != NULL){
		p = p->next;
	}
	p->next = new;
	
	return head;
}

struct Test* createLink2(struct Test* head)
{
	struct Test* new;

	while(1){
		new = (struct Test*)malloc(sizeof(struct Test));
		printf("input ypur new node data:\n");
		scanf("%d",&(new->data));
		if(new->data == 0){
			printf("0 quit\n");
			free(new);
			return head;
		}
		head = insertBehind(head,new);
	}	
}
int main()
{
    struct Test *head = NULL;
    struct Test t1 = {1000,NULL};
    struct Test t2 = {2000,NULL};

    head = createLink2(head);
    printLink(head);
    head = insertFromHead(head,&t1);
    printLink(head);
    head = insertBehind(head,&t2);
    printLink(head);
    //struct Test t1 = {1,NULL};
    // struct Test *p = (struct Test*)malloc(sizeof(struct Test));
    // struct Test t2 = {2,NULL};
    // struct Test t3 = {3,NULL};
    // struct Test t4 = {4,NULL};
    // struct Test t5 = {5,NULL};
    // struct Test new = {100,NULL};
    // struct Test new2 = {101,NULL};

    
    //t1.next = &t2;
    // p->data = 1;
    // p->next = &t2;
    // t2.next = &t3;
    // t3.next = &t4;
    // t4.next = &t5;

    //head = &t1;
    // head = p;

    // puts("raw data:");
    // printLink(head);

    // searchLink(head,5);
  
    // gaiLink(head,1,10000);
    // puts("after gai data:");
    // printLink(head);

    // puts("after insert data:");
    // insertFromBehind(head,5,&new);
    // printLink(head);

    // head = deleteNode(head,100);
    // puts("after delete data:");
    // printLink(head);

    // puts("before insert data:");
    // head = insertFromBefore(head,1,&new2);
    // printLink(head);

    return 0;
}
