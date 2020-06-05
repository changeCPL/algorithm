//#include<cstdio>
//#define MAX 100
//char A[MAX], B[MAX];
//const char cmp_info[3][25] = { "equal long to","longer than","shorter than" };
//int cmp(char a[], char b[]) {
//	int ans;
//	for (int i = 0;; i++) {
//		if (a[i] == b[i] && a[i] == '\0') {
//			ans = 0;
//			break;
//		}
//		else if (a[i] == '\0'&&b[i] != '\0') {
//			ans = 2;
//			break;
//		}
//		else if (a[i] != '\0'&&b[i] == '\0') {
//			ans = 1;
//			break;
//		}
//		else continue;
//	}
//	return ans;
//}
//int main() {
//	int m;
//	scanf("%d", &m);
//	while (m--){
//		scanf("%s%s", A, B);
//		printf("%s is %s %s\n", A,cmp_info[cmp(A,B)],B);
//	}
//	return 0;
//}