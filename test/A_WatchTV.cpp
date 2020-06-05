//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 105
//struct SHOW
//{
//	int start;
//	int end;
//	int time;
//}show[MAX];
//bool cmp(SHOW A, SHOW B) {
//	if (A.end != B.end)
//		return A.end < B.end;
//	else
//		return A.time < B.time;
//}
//int main() {
//	int n;
//	while (scanf("%d",&n),n){
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &show[i].start, &show[i].end);
//			show[i].time = show[i].end - show[i].start;
//		}
//		sort(show, show + n, cmp);
//		int ans=1,lasty=show[0].end;
//		for (int i = 1; i < n; i++) {
//			if (show[i].start >= lasty) {
//				ans++;
//				lasty = show[i].end;
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}