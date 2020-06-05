//#include<stdio.h>
//const int month[13][2]{ { 0,0 },{ 31,31 },{ 28,29 },{ 31,31 },{ 30,30 },{ 31,31 },{ 30,30 },{ 31,31 },
//{31,31},{30,30},{31,31},{30,30},{31,31}};
//int main() {
//	int casenum;
//	int y, m, d;
//	scanf("%d", &casenum);
//	while(casenum--) {
//		scanf("%d %d %d", &y, &m, &d);
//		d++;
//		if (d > month[m][0]) {  //题目说测试没有闰年
//			d -= month[m][0];
//			m++;
//			if (m > 12) {
//				y++;
//				m -= 12;
//			}
//		}
//		printf("%04d-%02d-%02d\n", y, m, d);
//	}
//	return 0;
//}