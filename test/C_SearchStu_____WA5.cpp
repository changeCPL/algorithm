//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////!!�ַ����鸴��strcpy
////!!�ṹ��ĳ�ʼ�븳ֵ
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
//	while (scanf("%d", &N) != EOF) {   //��Ŀδ˵���Ƕ����ԣ�Ҳû˵�ǵ�����ԡ����˵����Ƕ��
//		for (int i = 0; i < N; i++) {
//			scanf("%s", id);
//			int index = 0;
//			sscanf(id, "%d", &index);  //��һ����˳�����룬���봦����
//			if (index > 0)index -= 1;
//			strcpy(stu[index].id, id);
//			scanf("%s %s %d", stu[index].name,stu[index].sex,&stu[index].age);
//		}
//		scanf("%d", &m);
//		while (m--) {
//			scanf("%s", id);  //����³����id����20λ�ͱ���
//			print_stu(id);
//		}
//	}
//	return 0;
//}