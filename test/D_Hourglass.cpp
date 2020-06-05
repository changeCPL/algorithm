//#include<stdio.h>
//void print_line(int n, int index) {
//	int flag = 1;
//	for (int i = 0; i < index; i++)
//		printf(" ");
//	for (int i = 0; i < (2 * n - 1-2*index); i++) {
//		if (flag)printf("*");
//		else printf(" ");
//		flag = 1 - flag;
//	}
//	for (int i = 0; i < index; i++)
//		printf(" ");
//	printf("\n");
//}
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++)
//			print_line(n, i);
//		for (int i = n; i <=(2 * n - 2); i++)
//			print_line(n, 2 * n - 2 - i);
//	}
//	return 0;
//}