//#include<stdio.h>
//int A_win[3] = {0}, B_win[3] = {0};
//
//void deal(char a,char b) {
//	if (a - b != 0) {
//		if (a == 'B') {
//			if (b == 'C')A_win[0]++;
//			else B_win[2]++;
//		}
//		else if (a == 'C') {
//			if (b == 'J')A_win[1]++;
//			else B_win[0]++;
//		}
//		else {
//			if (b == 'B')A_win[2]++;
//			else B_win[1]++;
//		}
//	}
//	return;
//}
//char win_most(int x[]) {
//	int max = 0,ans=0;
//	for (int i = 0; i < 3; i++) {
//		if (x[i] > max) {
//			max = x[i];
//			ans = i;
//		}
//	}
//	return ((ans == 0) ? 'B' : ((ans == 1) ? 'C' : 'J'));
//}
//int main() {
//	int n, Awinsum = 0, peace = 0, Bwinsum = 0;
//	char a, b;
//	scanf("%d", &n);
//	//printf("n:%d\n", n);
//	for (int i = 0; i < n;i++) {
//		scanf("\n%c %c", &a, &b);
//		//printf("i:%d,a:%c,b:%c\n", i,a,b);
//		deal(a, b);
//	}
//	Awinsum = A_win[0] + A_win[1] + A_win[2];
//	Bwinsum = B_win[0] + B_win[1] + B_win[2];
//	peace = n - Awinsum - Bwinsum;
//	printf("%d %d %d\n%d %d %d\n", Awinsum, peace, Bwinsum, Bwinsum, peace, Awinsum);
//	printf("%c %c", win_most(A_win),win_most(B_win));
//	return 0;
//}