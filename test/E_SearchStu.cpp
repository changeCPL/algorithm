//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////�������ΪҪ������ѧ����Ϣ������һ���ṹ�����飬��������µ�ѧ����ϢǰҪ���
//struct stu{
//	char id[20];
//	char name[100];
//	char sex[6];
//	int age;
//}stu[25];
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
//	int k,n;
//	char id[20];
//	while (scanf("%d", &k) != EOF) {  
//		while (k--) {
//			memset(stu, 0, sizeof(stu));
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++) {
//				scanf("%s", id);
//				int index = 0;
//				sscanf(id, "%d", &index);  //��һ����˳�����룬���봦����
//				if (index > 0)index -= 1;
//				strcpy(stu[index].id, id);
//				scanf("%s %s %d", stu[index].name, stu[index].sex, &stu[index].age);
//			}
//			scanf("%s", &id);
//			print_stu(id);
//		}
//	}
//	return 0;
//}