//#include<stdio.h>
//#include<string.h>
//long long A = 0, B = 0;
//long long cal(char a[]) {
//	long long sum = 0;
//	int sign = 1;
//	for (int i = 0; a[i] != '\0'; i++) {
//		if ((i == 0) && (a[i] == '-')) {
//			sign = 0;
//			continue;
//		}
//		if (a[i] == ',')continue;
//		sum = sum * 10 + (a[i] - '0');
//		//printf("i:%d,a[i]:%c,a[i]-'0':%d,sum:%lld\n", i,a[i],a[i]-'0', sum);
//	}
//	sum = (sign == 0) ? (0 - sum) : sum;
//	return sum;
//}
//int main() {
//	char a[20], b[20];
//	while (scanf("%s%s", a, b)!=EOF) {
//		printf("%lld\n", (cal(a)+cal(b)) );
//	}
//	return 0;
//}
