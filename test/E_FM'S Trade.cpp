//#include<cstdio>
//#include<algorithm>
//using namespace std;
//struct ROOM {
//	int j;
//	int f;
//	double jperf;
//}room[1005];
//bool cmp(ROOM A, ROOM B) {
//	return(A.jperf > B.jperf);
//}
//int main() {
//	int n, m;
//	while (scanf("%d %d", &m, &n), m != -1 && n != -1) {
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &room[i].j, &room[i].f);
//			room[i].jperf = (double)room[i].j / room[i].f;
//		}
//		sort(room, room + n, cmp);
//		double ans=0;
//		for (int i = 0; i < n; i++) {
//			if (room[i].f >= m) {
//				ans += room[i].jperf*m;
//				break;
//			}
//			else {
//				ans += room[i].j;
//				m -= room[i].f;
//			}
//		}
//		printf("%.3f\n", ans);
//	}
//	return 0;
//}