//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//struct STU {
//	char name[22];
//	int score;
//}stu[1005];
//bool cmp(STU A, STU B) {
//	if (A.score != B.score)
//		return A.score > B.score;
//	else
//		return (strcmp(A.name, B.name) < 0);
//}
//int main() {
//	int n;
//	int point[12];
//	while (cin >> n, n) {
//		int m, g,passnum=0;
//		cin >> m >> g;
//		for (int i = 1; i <= m; i++) {
//			cin >> point[i];
//		}
//		for (int i = 0; i < n; i++) {
//			cin>>stu[i].name;
//			stu[i].score = 0;
//			int solved_num,pro_id;
//			cin >> solved_num;	
//			for (int j = 0; j < solved_num;j++) {
//				cin >> pro_id;
//				stu[i].score += point[pro_id];
//			}
//			if (stu[i].score >= g)
//				passnum++;
//		}
//		sort(stu, stu + n,cmp);
//		printf("%d\n", passnum);
//		for (int i = 0; i < passnum; i++)
//			printf("%s %d\n", stu[i].name, stu[i].score);
//	}
//	return 0;
//}