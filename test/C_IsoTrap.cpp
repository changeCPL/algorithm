//#include<stdio.h>
//int main() {
//	int m,h;
//	while (scanf("%d", &m) != EOF) {
//		while (m--) {
//			scanf("%d", &h);
//			for (int i = 0; i < h; i++) {
//				int start = (2 * h - 2 * i - 1) / 2;
//				int end = start + (h + 2 * i) - 1;
//				for (int j = 0; j < 3 * h - 2; j++) {
//					if (j < start||j>end)printf(" ");
//					else printf("\*");
//				}
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}