//等级的增删改查

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct grade {//
//	char name[10];
//	char letter[10];
//	struct grade* next;
//}grade;
//
//grade* initList() {
//	int i;
//	grade* head = (grade*)malloc(sizeof(grade));
//	head->next = NULL;
//	grade* p = head;
//
//	for (i = 0; i < 3; i++) {
//		grade* s = (grade*)malloc(sizeof(grade));
//		printf("请输入您要存储的用户名称 : "); gets(s->name);
//		printf("请输入您要存储的等级 : "); gets(s->letter);
//		p->next = s;
//		p = p->next;
//		s->next = NULL;
//	}
//	return head;
//}
//
//void DisplayList(grade* head) {
//	grade* p = head;
//	int i = 0;
//	while (p->next) {
//		p = p->next;
//		printf("********************\n");
//		printf("第 %d 个用户名称  \n", i++);
//		printf("名称 : "); puts(p->name);
//		printf("等级: "); puts(p->letter);
//	}
//}
//
//void Addgrade(grade* head) {
//	grade* p = head;
//	while (p->next)
//		p = p->next;
//	grade* s = (grade*)malloc(sizeof(grade));
//	p->next = s;
//	printf("请输入新的用户名称: \n");
//	printf("名称 : "); gets(s->name);
//	printf("等级 : "); gets(s->letter);
//	s->next = NULL;
//}
//
//void Deletegrade(grade* head) {
//	grade* p = head;
//	while (p->next->next)
//		p = p->next;
//	free(p->next);
//	p->next = NULL;
//}
//
//int SearchIndex(char name[], grade* head, int* index) {
//	grade* p = head;
//	while (p->next) {
//		p = p->next;
//		(*index)++;
//		if (strcmp(p->name, name) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//void Insertgrade(grade* head) {
//	
//	char name[20];
//	int index = 0;
//	grade* p = head;
//
//	printf("请输入您要插入的用户名称 : ");
//	gets(name);
//
//		while (index > 0) {
//			index--;
//			p = p->next;
//		
//
//		grade* s = (grade*)malloc(sizeof(grade));
//		s->next = p->next;
//		p->next = s;
//
//		printf("请输入新的用户名称: \n");
//		printf("名称 : "); gets(s->name);
//		printf("等级 : "); gets(s->letter);
//	}
//}
//
//void Changegrade(grade* head) {
//	char name[20];
//	int index = 0;
//	grade* p = head;
//
//	printf("请输入您要修改的名称 : ");
//	gets(name);
//
//	
//		while (index > 0) {
//			index--;
//			p = p->next;
//		
//
//		printf("请输入修改后名称: \n");
//		printf("名称 : "); gets(p->name);
//		printf("等级 : "); gets(p->letter);
//	}
//}
//
//void pause() {
//	system("pause");
//	system("cls");
//}
//
//void Selection(int n, grade* head) {
//	switch (n)
//	{
//	case 1:
//		system("cls");
//		Addgrade(head);
//		break;
//	case 2:
//		system("cls");
//		Deletegrade(head);
//		break;
//	case 3:
//		system("cls");
//		Changegrade(head);
//		break;
//	case 4:
//		system("cls");
//		Insertgrade(head);
//		break;
//	case 5:
//		system("cls");
//		DisplayList(head);
//		break;
//	case 6:
//		break;
//	default:
//		printf("请正确输入操作指令\n");
//		break;
//	}
//}
//
//void UserInterface() {
//	printf("请输入按键执行链表的操作 : \n");
//	printf("输入 1 进行 增加 操作 : \n");
//	printf("输入 2 进行 删除 操作 : \n");
//	printf("输入 3 进行 修改 操作 : \n");
//	printf("输入 4 进行 插入 操作 : \n");
//	printf("输入 5 进行 打印 操作 : \n");
//	printf("输入 6 关闭程序 : \n");
//	printf("  等级管理系统 >  ");
//}
//
//void List() {
//	int n;
//	grade* head = initList();//创建链表
//	UserInterface();
//	while (~scanf_s("%d", &n)) {
//		getchar();
//		if (6 == n)
//			break;
//		Selection(n, head);
//		pause();
//		UserInterface();
//	}
//}
//
//int main() {
//	List();
//	return 0;
//}

//顺序链表

//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#define maxsize  6
//typedef struct Queue
//{
//    int data[maxsize];
//    int front, rear;
//}Queue, * pQueue;
//void init(pQueue q)
//{//初始化
//    q->front = 0;
//    q->rear = 0;
//}
//void add(pQueue q, int x)
//{//增加
//    if ((q->rear + 1) % maxsize == q->front)
//    {
//        printf("overflow");
//        return;
//    }
//    else
//    {
//        q->rear = (q->rear + 1) % maxsize;
//        q->data[q->rear] = x;
//        printf("添加成功\n");
//    }
//}
//
//void Deletequeues(pQueue q)
//{//删除
//    if (q->front == q->rear)
//    {
//        printf("null");
//        return;
//    }
//    else
//    {
//        q->front = (q->front + 1) % maxsize;
//        printf("删除的元素是:%d\n", q->data[q->front]);
//    }
//}
//void traverseQuene(pQueue q)
//{//遍历
//    int i = q->front;
//    while (i != q->rear)
//    {
//        i = (i + 1) % maxsize;
//        printf("%d ", q->data[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    pQueue q = (pQueue)malloc(sizeof(Queue));
//    init(q);
//    add(q, 1);
//    add(q, 2);
//    add(q, 3);
//    traverseQuene(q);
//    system("pause");
//    Deletequeues(q);
//    traverseQuene(q);
//    system("pause");
//}