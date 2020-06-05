//#include<cstdio>
//typedef struct node{
//	int id;
//	node* next;
//	//重新定义构造函数，定义时必须初始化
//	node(int _id) :id(_id),next(NULL) {};  //next记得初始为NULL
//}node;
//void insert(node *head,node *x) {  //按序插入
//	node *p=head->next, *pre=head;
//	while (p!=NULL) {
//		if (x->id == p->id) {
//			node *q = p->next;
//			pre->next = q;
//			p->next = q->next;
//			q->next = p;
//			break;
//		}
//		else if (x->id < p->id) {
//			printf("no\n");
//			x->next = p;
//			pre->next = x;
//			break;
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//	p = head->next;
//	while (p != NULL) {
//		printf("%d", p->id);
//		if (p->next == NULL)
//			printf("\n");
//		else
//			printf(" ");
//		p = p->next;
//	}
//}
//int main() {
//	int n, id;
//	scanf("%d%d", &id,&n);
//	node *target = new node(id);
//	node *head = new node(0),*x;
//	node *pre = head;
//	while (n--){
//		scanf("%d",&id);
//		x = new node(id);
//		pre->next = x;
//		pre = x;
//	}
//	insert(head, target);
//	return 0;
//}