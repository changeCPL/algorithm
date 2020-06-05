//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//#define MAX 100005
//using namespace std;
//struct STU {
//	char id[8];
//	char name[10];
//	int score;
//	int C;
//}stu[MAX];
//bool cmp(STU A, STU B) {
//	switch (A.C){
//	case 1:
//		return (strcmp(A.id,B.id)<0);
//	case 2:
//		if (strcmp(A.name, B.name) != 0)
//			return(strcmp(A.name, B.name) < 0);
//		else
//			return (strcmp(A.id, B.id) < 0);
//	case 3:
//		if (A.score != B.score)
//			return(A.score < B.score);
//		else
//			return (strcmp(A.id, B.id) < 0);
//	default:
//		break;
//	}
//}
//int main() {
//	int n, C;
//	int Caseid = 0;
//	while (scanf("%d", &n), n) {
//		Caseid++;
//		scanf("%d", &C);
//		printf("Case %d:\n", Caseid);
//		for (int i = 0; i < n; i++) {
//			scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);
//			stu[i].C = C;
//		}
//		sort(stu, stu + n, cmp);
//		for (int i = 0; i < n; i++) {
//			printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].score);
//		}
//	}
//	return 0;
//}