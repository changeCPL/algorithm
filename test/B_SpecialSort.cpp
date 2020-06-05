//#include<cstdio>
//#include<algorithm>
//#define MAX 1005
//using namespace std;
//int input[MAX];
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		scanf("%d", &input[0]);
//		int max=input[0];
//		if (n == 1) {
//			printf("%d\n-1\n", max);
//			continue;
//		}
//		//int allsame = 1;
//		for (int i = 1; i < n; i++) {
//			scanf("%d", &input[i]);
//			//if (input[i] != input[i - 1])allsame = 0;
//		}
//		sort(input, input + n);
//		max = input[n - 1];
//		printf("%d\n", max);
//		//if (allsame == 1) { printf("-1\n"); continue;}
//		for (int i = 0; i < n - 1; i++) {
//			printf("%d", input[i]);
//			if (i != n - 2)
//				printf(" ");
//			else
//				printf("\n");
//
//		}
//	}
//	return 0;
//}