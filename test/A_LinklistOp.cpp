////���⿼�������������ԡ�˳����У������жϺ�ʱʹ��˳����ʱʹ�������أ���Ҫ�����ǵ��ص��ˡ�
////˳�����ص��������ȡ��������ʣ�Ҳ����˵�����ȡ�Ͳ�ѯ�Ƚ�Ƶ���Ļ�ʹ��˳���ȽϺ��ʣ�
////������ص��ǲ����ɾ��ʱ�����ƶ����Ľڵ㣬��������ɾ�������Ƚ�Ƶ���Ļ�ʹ������ȽϺ���
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//struct node
//{
//	int data;
//	node *next;
//	node(int x) :data(x), next(NULL) {};
//};
//void LinkListGetDel(node* &head, int x,int op) {
//	node * ans = head->next,*pre=head;
//	x--;
//	for (int i = 0; i < x; i++) {
//		pre = ans;
//		if (ans == NULL)
//			break;
//		ans = ans->next;
//	}
//	if (op == 0) {  //get
//		if (ans != NULL)
//			printf("%d\n", ans->data);
//		else
//			printf("get fail\n");
//	}
//	else {  //del
//		if (ans != NULL) {
//			pre->next = ans->next;
//			delete(ans);
//			ans = pre->next;
//			printf("delete OK\n");
//		}
//		else
//			printf("delete fail\n");
//	}
//}
//void LinkListInsert(node* &head, int x, int data) {
//	node * ans = head->next, *pre = head;
//	x--;
//	for (int i = 0; i < x; i++) {
//		pre = ans;
//		if (ans == NULL)
//			break;
//		ans = ans->next;
//	}
//	if (pre != NULL) {
//		node *q = new node(data);
//		q->next = ans;
//		pre->next = q;
//		printf("insert OK\n");
//	}
//	else {
//		printf("insert fail\n");
//	}
//}
//void show(node* &head) {
//	node *x = head->next;
//	if (x == NULL) {
//		printf("Link list is empty\n");
//		return;
//	}
//	while(x!= NULL) {
//		printf("%d", x->data);
//		x = x->next;
//		if (x == NULL)
//			printf("\n");
//		else
//			printf(" ");
//	}
//}
//int main() {
//	int n,data;
//	scanf("%d", &n);
//	node *p=NULL, *pre=NULL,*head=new node(0);  //һ��Ҫ��ʼ������Ȼ��ַ������׳���
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &data);
//		p = new node(data);
//		p->next = pre;
//		pre = p;
//	}
//	head->next = p;
//	int k;
//	scanf("%d", &k);
//	char op[8];
//	int loc;
//	while (k--) {
//		scanf("%s", op);
//		if (strcmp(op, "show")==0)
//			show(head);
//		else if (strcmp(op, "get") == 0) {
//			scanf("%d",&loc);
//			LinkListGetDel(head, loc, 0);
//		}
//		else if (strcmp(op, "delete") == 0) {
//			scanf("%d", &loc);
//			LinkListGetDel(head, loc, 1);
//		}
//		else if (strcmp(op, "insert") == 0) {
//			scanf("%d %d", &loc,&data);
//			LinkListInsert(head, loc, data);
//		}
//	}
//	return 0;
//}