//#include<stdio.h>
//#include<string>
////这个题目很容易错，这个代码应该还可以简化一下
//const int month[13][2]{ {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},
//{31,31},{30,30},{31,31},{30,30},{31,31}};
//int isleap(int year) {
//	if (year % 100 == 0) {
//		if (year % 400 == 0)
//			return 1;
//	}
//	else if (year % 4 == 0) {
//		return 1;
//	}
//	return 0;
//}
//int cmp(int a, int b) {  //为-1时，小于;0,相等；1大于
//	if (a > b)return 1;
//	else if (a < b)return -1;
//	else return 0;
//}
//int cal(int y1,int mon1,int day1, int y2,int mon2,int day2) {
//	int sum = 0;
//	int leap1,leap2;
//	leap1 = isleap(y1);
//	leap2 = isleap(y2);
//
//	int sum1 = 0,sum2=0;//m1,m2前面月份天数的和
//	for (int i = 1; i < mon1; i++) {
//		sum1 += month[i][leap1];
//	}
//	for (int i = 1; i < mon2; i++) {
//		sum2 += month[i][leap2];
//	}
//	if (y1 != y2) {
//		//中间的年份
//		for (int year = y1 + 1; year < y2; year++) {
//			if (isleap(year))sum += 366;
//			else sum += 365;
//		}
//		//year1剩下的
//		sum += ((leap1) ? 366 : 365) - sum1 - day1 + 1;
//		//year2过完的
//		sum += sum2+day2;
//	}
//	else   //同一年
//		sum = sum2 - sum1 +day2-day1+ 1;
//	printf("%d\n", sum);
//	return sum;
//}
//int main() {
//	//简化：直接读两个int，不是升序则交换，然后提取y,m,d
//	//d1累加，更新m1,y1,ans(初始1),直到y1==y2&&m1==m2&&d1==d2
//	char date1[10], date2[10];
//	int y1 = 0, y2 = 0, m1 = 0, m2 = 0, d1 = 0, d2 = 0;
//	int flag;//为-1时，代表第一个日期早于第二个日期;0,相等；1晚于
//	while (scanf("%s%s", date1, date2) != EOF) {
//		sscanf(date1, "%4d%2d%2d", &y1, &m1, &d1);
//		sscanf(date2, "%4d%2d%2d", &y2, &m2, &d2);
//		//printf("date1:%d%d%d,date2:%d%d%d\n", y1, m1, d1, y2, m2, d2);
//		int f1, f2, f3;
//		f1 = cmp(y1, y2);
//		f2 = cmp(m1, m2);
//		f3 = cmp(d1, d2);
//		flag = (!f1) ? ((!f2) ? f3 : f2) : f1;
//		if (flag < 1) //日期1小于等于日期2
//			cal(y1, m1, d1, y2, m2, d2);
//		else
//			cal(y2, m2, d2, y1, m1, d1);
//	}
//	return 0;
//}