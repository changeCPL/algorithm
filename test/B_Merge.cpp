//#include<cstdio>
//typedef struct stu{
//	int id, grade;
//	stu* next;
//	//���¶��幹�캯��������ʱ�����ʼ��
//	stu(int _id, int _grade) :id(_id), grade(_grade), next(NULL) {};  //next�ǵó�ʼΪNULL
//}stu;
//void insert(stu *head,stu *x) {  //�������
//	stu *p=head->next, *pre=head;
//	while (p!=NULL && x->id >= p->id) {
//		pre = p;
//		p = p->next;
//	}
//	x->next = p;
//	pre->next = x;
//}
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	n += m;
//	int id, grade;
//	stu *head = new stu(0,0),*x;
//	while (n--){
//		scanf("%d %d",&id, &grade);
//		x = new stu(id, grade);
//		insert(head, x);
//	}
//	x = head->next;
//	while (x != NULL) {
//		printf("%d %d\n", x->id, x->grade);
//		x = x->next;
//	}
//	return 0;
//}

//�ϲ�������������
