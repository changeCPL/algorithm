//#include <stdio.h>
//int main() {
//	long long deci;
//	char ans[100];
//	while (scanf("%lld", &deci) != EOF) {
//		int len = 0;//ת�������ֳ���
//		int lo, hi; //�̺�����
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