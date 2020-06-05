//#include<cstdio>
//int main() {
//	int distance;
//	while (scanf("%d", &distance), distance) {
//		double fee = 0;
//		int x = distance / 8;
//		int y = distance % 8;
//		if (x == 0) {
//			if (y < 4)
//				fee = 10;
//			else
//				fee = 10 + (y - 4) * 2;
//		}
//		else {
//			fee += x * 18;
//			if (y <= 5) {
//				fee += 2.4*y;
//			}
//			else
//				fee += 10 + (y - 4) * 2;
//		}
//		if ((fee - (int)fee) > 0)
//			printf("%.1f\n", fee);
//		else
//			printf("%d\n", (int)fee);
//	}
//	return 0;
//}