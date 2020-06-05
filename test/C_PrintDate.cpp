//#include<stdio.h>
//const int month[13][2]{ { 0,0 },{ 31,31 },{ 28,29 },{ 31,31 },{ 30,30 },{ 31,31 },{ 30,30 },{ 31,31 },
//{31,31},{30,30},{31,31},{30,30},{31,31}};
//int Month, Day;
//int isleap(int year) {
//	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
//		return 1;
//	return 0;
//}
//void cal(int y, int d) {
//	Month = 1;
//	Day = 0;
//	int leap = isleap(y);
//	for (int i = 1; i < 13; i++) {
//		int curmondays = month[i][leap];
//		if ( curmondays< d) {
//			d -= curmondays;
//			Month += 1;
//		}
//		else {
//			Day = d;
//			break;
//		}
//	}
//	return;
//}
//int main() {
//	int Year, day_sum;
//	while (scanf("%d %d", &Year, &day_sum) != EOF) {
//		cal(Year, day_sum);
//		printf("%04d-%02d-%02d\n", Year, Month, Day);
//	}
//	return 0;
//}