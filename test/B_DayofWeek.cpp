//#include<stdio.h>
//#include<string.h>
//const char weekday[7][15] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
//const char mon[13][15] = { "","January","February","March","April","May","June","July","August","September","October","November","December" };
//int cal(int year,int month,int day) {
//	int ans = -1;
//	if (month == 1 || month == 2) {
//		month += 12;
//		year -= 1;
//	}
//	ans = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7; 
//	if (ans != -1)
//		printf("%s\n", weekday[ans]);
//	return ans;
//}
//int main() {
//	int year, month, day;
//	char m[15];
//	while (scanf("%d %s %d", &day, m, &year)!=EOF) {
//		for (int i = 1; i < 13; i++) {
//			if (strcmp(m, mon[i]) == 0) {
//				month = i;
//				break;
//			}
//		}
//		//printf("%d %d %d\n", year, month, day);
//		cal(year, month, day);
//	}
//	return 0;
//}