//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////!!字符数组复制strcpy
////!!结构体的初始与赋值
//struct Stu{
//	char id[20];
//	char name[100];
//	char sex[6];
//	int age;
//}stu[1005];
//int N;
//void print_stu(char id[]) {
//	int index=0;
//	sscanf(id, "%d", &index);
//	index -= 1;
//	if (strcmp(id, stu[index].id) == 0) {
//		printf("%s %s %s %d\n", stu[index].id, stu[index].name, stu[index].sex, stu[index].age);
//	}
//	else
//		printf("No Answer!\n");
//	return;
//}
//int main() {
//	int m;
//	char id[20];
//	while (scanf("%d", &N) != EOF) {   //题目未说明是多点测试，也没说是单点测试。哭了当作是多点
//		for (int i = 0; i < N; i++) {
//			scanf("%s", id);
//			int index = 0;
//			sscanf(id, "%d", &index);  //不一定按顺序输入，必须处理！！
//			if (index > 0)index -= 1;
//			strcpy(stu[index].id, id);
//			scanf("%s %s %d", stu[index].name,stu[index].sex,&stu[index].age);
//		}
//		scanf("%d", &m);
//		while (m--) {
//			scanf("%s", id);  //不够鲁棒，id超过20位就崩了
//			print_stu(id);
//		}
//	}
//	return 0;
//}