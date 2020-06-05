//#include<iostream>
//#include<algorithm>
//using namespace std;
//bool cmp(int a, int b) {
//	return (a > b);
//}
//int main() {
//	int a[10];
//	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9]) {
//		int odd[10], even[10];
//		int odd_num = 0, even_num = 0;
//		for (int i = 0; i < 10; i++) {
//			if (a[i] % 2 != 0)
//				odd[odd_num++] = a[i];
//			else
//				even[even_num++] = a[i];
//		}
//		sort(even, even + even_num);
//		sort(odd, odd + odd_num,cmp);
//		for (int i = 0; i < odd_num; i++) {
//			printf("%d", odd[i]);
//			if (i < 9)
//				printf(" ");
//		}
//		for (int i = 0; i < even_num; i++) {
//			printf("%d",even[i]);
//			if(i<9)
//				if (i < 9)
//					printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}