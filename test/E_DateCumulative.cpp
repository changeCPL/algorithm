//#include<stdio.h>
//const int month[13][2]{ { 0,0 },{ 31,31 },{ 28,29 },{ 31,31 },{ 30,30 },{ 31,31 },{ 30,30 },{ 31,31 },
//{31,31},{30,30},{31,31},{30,30},{31,31}};
//int isleap(int year) {
//	return((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0));
//}
//int main() {
//	int y, m, d, sum;
//	int casenum;
//	scanf("%d", &casenum);
//	while (casenum--){
//		scanf("%d %d %d %d", &y, &m, &d, &sum);
//		int leap = isleap(y);
//		while (sum!=0){
//			d++;
//			if (d > month[m][leap]) {
//				d -= month[m][leap];
//				m++;
//				if (m > 12) {
//					y++;
//					leap = isleap(y);
//					m -= 12;
//				}
//			}
//			sum--;
//		}
//		printf("%04d-%02d-%02d\n", y, m, d);
//	}
//	return 0;
//}