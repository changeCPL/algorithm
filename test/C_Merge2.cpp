////Ҫ���ȶ�����ѭ��������(��ͷ�ڵ�ʵ��)���ٺϲ����
//#include<cstdio>
//typedef struct node{
//	int data;
//	node* next;
//	//���¶��幹�캯��������ʱ�����ʼ��
//	node(int _data) :data(_data), next(NULL) {};  //next�ǵó�ʼΪNULL
//}node;
//
//int main() {
//	int n;
//	int data;
//	node *head[2],*x;
//	node *pre;
//	for (int i = 0; i < 2; i++) {
//		head[i] = new node(0);
//		pre = head[i];
//		scanf("%d", &n);
//		while (n--) {
//			scanf("%d", &data);
//			x = new node(data);
//			pre->next = x;
//			pre = x;
//		}
//		x->next = head[i];
//	}
//	pre = head[0];
//	x = head[1];
//	do {
//		pre = pre->next;
//	} while (pre->next!=head[0]);
//	do {
//		x = x->next;
//	} while (x->next != head[1]);
//	x->next = head[0];
//	pre->next = head[1]->next;
//	delete(head[1]);
//	x = head[0]->next;
//	while (x != head[0]) {
//		printf("%d", x->data);
//		if (x->next == head[0])
//			printf("\n");
//		else
//			printf(" ");
//		x = x->next;
//	}
//	return 0;
//}