//#include <stdio.h>
//int main() {
//	long long deci;
//	char ans[100];
//	while (scanf("%lld", &deci) != EOF) {
//		int len = 0;//转换后数字长度
//		int lo, hi; //商和余数
//		do {
//			lo = deci / 8;
//			hi = deci % 8;
//			deci = lo;
//			ans[len] = '0'+hi;
//			len++;
//		} while (lo != 0);
//		for (int i = len - 1; i >= 0; i--)
//			printf("%c", ans[i]);
//		printf("\n");
//	}
//	return 0;
//}