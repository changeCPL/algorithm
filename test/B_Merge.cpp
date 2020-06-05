//#include<cstdio>
//typedef struct stu{
//	int id, grade;
//	stu* next;
//	//重新定义构造函数，定义时必须初始化
//	stu(int _id, int _grade) :id(_id), grade(_grade), next(NULL) {};  //next记得初始为NULL
//}stu;
//void insert(stu *head,stu *x) {  //按序插入
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

//合并两个有序链表
