//#include<stdio.h>
//#include<string.h>
//#define MAX 105
//char str[MAX];
//
//int main() {
//	scanf("%s", str);
//	int N = strlen(str);
//	int n2 = (N + 2) / 3 + (N + 2) % 3;
//	int n1 = (N + 2 - n2) / 2;
//	//printf("N:%d,n1:%d,n2:%d\n", N, n1, n2);
//	for (int i = 0; i < n1; i++) {
//		for (int j = 0; j < n2; j++) {
//			if (j == 0 ) {
//				printf("%c", str[i]);
//			}
//			else if (j == (n2 - 1)) {
//				printf("%c", str[N - 1-i]);
//			}
//			else {
//				if (i == (n1 - 1)) {
//					printf("%c", str[i + j]);
//				}
//				else printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}