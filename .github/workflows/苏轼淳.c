//�ȼ�����ɾ�Ĳ�

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
//		printf("��������Ҫ�洢���û����� : "); gets(s->name);
//		printf("��������Ҫ�洢�ĵȼ� : "); gets(s->letter);
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
//		printf("�� %d ���û�����  \n", i++);
//		printf("���� : "); puts(p->name);
//		printf("�ȼ�: "); puts(p->letter);
//	}
//}
//
//void Addgrade(grade* head) {
//	grade* p = head;
//	while (p->next)
//		p = p->next;
//	grade* s = (grade*)malloc(sizeof(grade));
//	p->next = s;
//	printf("�������µ��û�����: \n");
//	printf("���� : "); gets(s->name);
//	printf("�ȼ� : "); gets(s->letter);
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
//	printf("��������Ҫ������û����� : ");
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
//		printf("�������µ��û�����: \n");
//		printf("���� : "); gets(s->name);
//		printf("�ȼ� : "); gets(s->letter);
//	}
//}
//
//void Changegrade(grade* head) {
//	char name[20];
//	int index = 0;
//	grade* p = head;
//
//	printf("��������Ҫ�޸ĵ����� : ");
//	gets(name);
//
//	
//		while (index > 0) {
//			index--;
//			p = p->next;
//		
//
//		printf("�������޸ĺ�����: \n");
//		printf("���� : "); gets(p->name);
//		printf("�ȼ� : "); gets(p->letter);
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
//		printf("����ȷ�������ָ��\n");
//		break;
//	}
//}
//
//void UserInterface() {
//	printf("�����밴��ִ������Ĳ��� : \n");
//	printf("���� 1 ���� ���� ���� : \n");
//	printf("���� 2 ���� ɾ�� ���� : \n");
//	printf("���� 3 ���� �޸� ���� : \n");
//	printf("���� 4 ���� ���� ���� : \n");
//	printf("���� 5 ���� ��ӡ ���� : \n");
//	printf("���� 6 �رճ��� : \n");
//	printf("  �ȼ�����ϵͳ >  ");
//}
//
//void List() {
//	int n;
//	grade* head = initList();//��������
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

//˳������

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
//{//��ʼ��
//    q->front = 0;
//    q->rear = 0;
//}
//void add(pQueue q, int x)
//{//����
//    if ((q->rear + 1) % maxsize == q->front)
//    {
//        printf("overflow");
//        return;
//    }
//    else
//    {
//        q->rear = (q->rear + 1) % maxsize;
//        q->data[q->rear] = x;
//        printf("��ӳɹ�\n");
//    }
//}
//
//void Deletequeues(pQueue q)
//{//ɾ��
//    if (q->front == q->rear)
//    {
//        printf("null");
//        return;
//    }
//    else
//    {
//        q->front = (q->front + 1) % maxsize;
//        printf("ɾ����Ԫ����:%d\n", q->data[q->front]);
//    }
//}
//void traverseQuene(pQueue q)
//{//����
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