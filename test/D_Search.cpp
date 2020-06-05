////数组下标取负数不报错，相当于首地址减再取值；
////声明为int数组，发现负数下标对应为随机数，声明为bool数组负数下标对应为0,有必然联系？
//
//#include<stdio.h>
//#include<string.h>
//#define MAX 105
//int ele[MAX]={ 0 };
//bool search(int x,int n) {
//	for (int i = 0; i < n; i++) {
//		if (ele[i] == x) {
//			return true;
//		}
//	}
//	return false;
//}
//int main() {
//	int n, m;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &ele[i]);
//		}
//		scanf("%d", &m);
//		while (m--) {
//			int x;
//			scanf("%d", &x);
//			if (search(x,n)) 
//				printf("YES\n"); 
//			else 
//				printf("NO\n");
//		}
//	}
//	return 0;
//}