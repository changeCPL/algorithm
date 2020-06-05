////#include<cstdio>
////int main() {
////	int num = 0;
////	char ans[90][90];
////	while (scanf("%s", ans[num]) != EOF)num++;
////	for (int i = num - 1; i >= 0; i--) {
////		printf("%s", ans[i]);
////		if (i > 0)printf(" ");
////	}
////	return 0;
////}
//#include<cstdio>
//#include<cstring>
//int main() {
//	char ans[90][90];
//	char str[90];
//	gets_s(str);
//	int len = strlen(str), r = 0, h = 0;
//	for (int i = 0; i < len; i++) {
//		if (str[i] != ' ') {
//			ans[r][h++] = str[i];
//		}
//		else {
//			ans[r][h] = '\0';
//			r++; h = 0;
//		}
//	}
//	for (int i = r; i >= 0; i--) {
//		printf("%s", ans[i]);
//		if (i > 0)printf(" ");
//	}
//	return 0;
//}