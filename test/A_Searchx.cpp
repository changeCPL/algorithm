//#include<cstdio>
//using namespace std;
//const int MAX = 205;
//int input[MAX];
//int binary_search(int A[], int left, int right, int x) {
//	int mid;
//	while (left <= right) {		//left>right说明找不到x
//		mid = left + (right - left) / 2;     //防止二分上界超过int范围一半，left+right溢出
//		if (A[mid] == x)
//			return mid;
//		else if (A[mid] > x) {
//			right = mid - 1;
//		}
//		else
//			left = mid + 1;
//	}
//	return -1;
//}
//int main() {
//	int n, x;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++)
//			scanf("%d", &input[i]);
//		scanf("%d", &x);
//		printf("%d\n", binary_search(input, 0, n - 1, x));
//	}
//	return 0;
//}