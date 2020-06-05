//#include<stdio.h>
//long long calP(char A[], char D) {
//	long long P = 0;
//	int base = D - '0';
//	for (int i = 0; A[i] != '\0'; i++){
//		if (A[i] == D)P = P* 10 + base;
//	}
//	return P;
//}
//int main() {
//	char A[20], B[20];
//	char DA, DB;
//	while (scanf("%s %c %s %c", A, &DA, B, &DB) != EOF) {
//		printf("%lld\n", (calP(A, DA) + calP(B, DB)));
//	}
//	return 0;
//}