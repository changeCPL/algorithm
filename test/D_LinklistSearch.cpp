//#include<cstdio>
//typedef struct node{
//	int id;
//	node* next;
//	//���¶��幹�캯��������ʱ�����ʼ��
//	node(int _id) :id(_id),next(NULL) {};  //next�ǵó�ʼΪNULL
//}node;
//void insert(node *head,node *x) {  //�������
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