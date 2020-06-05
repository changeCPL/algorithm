//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 605
//int blocks[MAX];
//bool cmp(int a, int b) {
//	return a > b;
//}
//int main() {
//	int L, n;
//	while (scanf("%d %d", &L, &n) != EOF) {
//		if (n == 0) {
//			printf("impossible\n");
//			continue;
//		}
//		else {
//			long long sum = 0;
//			for (int i = 0; i < n; i++) {
//				scanf("%d", &blocks[i]);
//				sum += blocks[i];
//			}
//			if (sum < L) {
//				printf("impossible\n");
//				continue;
//			}
//			int ans = 0;
//			sum = 0;
//			sort(blocks, blocks + n, cmp);
//			for (int i = 0; i < n; i++) {
//				sum += blocks[i];
//				ans++;
//				if (sum >= L)
//					break;
//			}
//			printf("%d\n", ans);
//		}
//	}
//	return 0;
//}