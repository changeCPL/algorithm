//#include<stdio.h>
//int main() {
//	long long sum = 0, A, B;
//	int base;
//	char ans[50];
//	while (scanf("%d", &base), base) {
//		int len = 0;//转换后数字长度
//		scanf("%lld%lld", &A, &B);
//		sum = A + B;
//		int lo, hi; //商和余数
//		do {
//			lo = sum / base;
//			hi = sum % base;
//			sum = lo;
//			ans[len] = '0' + hi;
//			len++;
//		} while (lo != 0);
//		for (int i = len - 1; i >= 0; i--)
//			printf("%c", ans[i]);
//		printf("\n");
//	}
//	return 0;
//}