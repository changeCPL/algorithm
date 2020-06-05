////要求先读到俩循环单链表(带头节点实现)，再合并输出
//#include<cstdio>
//typedef struct node{
//	int data;
//	node* next;
//	//重新定义构造函数，定义时必须初始化
//	node(int _data) :data(_data), next(NULL) {};  //next记得初始为NULL
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