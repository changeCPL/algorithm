//#include<cstdio>
//typedef struct node {
//	int id;
//	node* next;
//	//重新定义构造函数，定义时必须初始化
//	node(int _id) :id(_id), next(NULL) {};  //next记得初始为NULL
//}node;
//void show(node *head) {
//	node *p = head->next;
//	if (p == NULL) {
//		printf("list is empty\n");
//		return;
//	}
//	while (p != NULL) {
//		printf("%d", p->id);
//		if (p->next == NULL)
//			printf("\n");
//		else
//			printf(" ");
//		p = p->next;
//	}
//}
//void del(node *head) {
//	node *pre=head->next, *cur,*p;
//	cur = pre->next;
//	while (cur != NULL) {
//		p = cur->next;
//		if (cur->id == pre->id) {
//			pre->next = p;
//			delete(cur);
//		}
//		else {
//			pre = cur;
//		}
//		cur = p;
//	}
//}
//int main() {
//	int n, id;
//	node *head, *pre, *x;
//	while (scanf("%d", &n) != EOF) {
//		if (!n) {
//			printf("list is empty\n");
//			continue;
//		}
//		head = new node(0);
//		pre = head;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &id);
//			x = new node(id);
//			pre->next = x;
//			pre = x;
//		}
//		show(head);
//		del(head);
//		show(head);
//		pre = head;
//		while(pre!=NULL) {
//			x = pre->next;
//			delete(pre);
//			pre = x;
//		}
//	}
//	return 0;
//}