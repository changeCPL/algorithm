//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int MAX = 105;
//int input[MAX], aim[MAX];
//int binary(int a[], int left, int right, int x) {
//	int mid;
//	while (left <= right) {
//		mid = left + (right - left) / 2;
//		if (a[mid] > x) {
//			right = mid - 1;
//		}
//		else if (a[mid] < x) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int n, m;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++)
//			scanf("%d", &input[i]);
//		sort(input, input + n);
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++) {
//			scanf("%d", &aim[i]);
//			if (binary(input, 0, n - 1, aim[i]) != -1)
//				printf("YES\n");
//			else
//				printf("NO\n");
//		}
//	}
//	return 0;
//}