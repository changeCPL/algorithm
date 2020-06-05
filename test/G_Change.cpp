//#include<cstdio>
//#include<cstring>
//const int Den[5] = { 50,20,10,5,1 };
//int count[5] = {};
//int main() {
//	int n;
//	while (scanf("%d",&n) != EOF) {
//		memset(count, 0, sizeof(count));
//		for (int i = 0; i < 5; i++) {
//			count[i] = n/Den[i];
//			n %= Den[i];
//			if (count[i] != 0) {
//				printf("%d*%d", Den[i], count[i]);
//				if (n != 0)
//					printf("+");
//				else
//					printf("\n");
//			}
//		}
//	}
//	return 0;
//}