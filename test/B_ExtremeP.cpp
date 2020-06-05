//#include<cstdio>
//const int MAX = 10005;
//int input[MAX];
//int main() {
//	int k;
//	while (scanf("%d", &k) != EOF) {
//		while (k--) {
//			int n;
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++) {
//				scanf("%d", &input[i]);
//			}
//			bool flag = 0;
//			for (int i = 0; i < n; i++) {
//				if (i == 0) {
//					if (input[i]!=input[i+1]) {
//						printf("0");
//						flag = 1;
//					}
//				}
//				else if (i == n - 1) {
//					if (input[i]!=input[i-1]) {
//						if (flag) printf(" ");
//						printf("%d", i);
//					}
//					if (flag)printf("\n");
//				}
//				else {
//					if ((input[i] > input[i - 1] && input[i] > input[i + 1]) || (input[i] < input[i - 1] && input[i] < input[i + 1])) {
//						if (flag) printf(" ");
//						printf("%d", i);
//						flag = 1;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}