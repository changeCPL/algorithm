//#include<cstdio>
//typedef struct node{
//	int id;
//	node* next;
//	//重新定义构造函数，定义时必须初始化
//	node(int _id) :id(_id),next(NULL) {};  //next记得初始为NULL
//}node;
//void show(node *head) {
//	node *p = head->next;
//	while (p != NULL) {
//		printf("%d", p->id);
//		if (p->next == NULL)
//			printf("\n");
//		else
//			printf(" ");
//		p = p->next;
//	}
//}
//node* reverselist(node *head) {
//	node *first;
//	first = head->next;
//	delete(head);
//	node *pre = first;
//	if (pre==NULL) {
//		return NULL;
//	}
//	node *cur = pre->next;
//	node *ans = new node(0);
//	node *temp;
//	while (cur != NULL) {
//		temp = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = temp;
//	}
//	first->next = NULL;
//	ans->next = pre;
//	return ans;
//}
//int main() {
//	int n, id;
//	node *head,*pre,*x;
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
//		head = reverselist(head);
//		show(head);
//		pre = head;
//		for (int i = 0; i <= n; i++) {
//			x = pre->next;
//			delete(pre);
//			pre = x;
//		}
//	}
//	return 0;
//}