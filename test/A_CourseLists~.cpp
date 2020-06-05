////使用set自动排序，会内存超限！
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector<int>stu_course[175762];
//int hashfunc(char stu[]) {
//	int id=0;
//	for (int i = 0; i < 3; i++)
//		id = id * 26 + stu[i] - 'A';
//	id = id * 10 + stu[3] - '0';
//	return (id);
//}
//int main() {
//	int stu_num, cour_num;
//	scanf("%d %d", &stu_num, &cour_num);
//	int cour_id, curnum,stu_id;
//	char name[5];
//	for (int i = 0; i < cour_num; i++) {
//		scanf("%d %d", &cour_id, &curnum);
//		for (int j = 0; j < curnum; j++) {
//			scanf("%s", name);
//			stu_id = hashfunc(name);
//			stu_course[stu_id].push_back(cour_id);
//		}
//	}
//	for (int i = 0; i < stu_num; i++) {
//		scanf("%s", name);
//		printf("%s ", name);
//		stu_id = hashfunc(name);
//		int stuconum = stu_course[stu_id].size();
//		printf("%d", stuconum);
//		sort(stu_course[stu_id].begin(), stu_course[stu_id].end());
//		for (int i = 0; i < stuconum;i++) {
//			printf(" %d", stu_course[stu_id][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}