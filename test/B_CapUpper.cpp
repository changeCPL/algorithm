//#include<cstdio>
//#include<iostream>
//#include<cctype>
//int main() {
//	char ans[205];
//	bool flag;
//	int len;
//	while (gets_s(ans, 205) != NULL) {
//		flag = 1;  //新一行应该首字母大写
//		for (len = 0; ans[len] != '\0'; len++) {
//			if (ans[len] == ' ' || ans[len] == '\t' || ans[len] == '\r' || ans[len] == '\n') {
//				flag = 1;
//				continue;
//			}
//			if (flag&&islower(ans[len]))
//				ans[len] -= 32;
//			flag = 0;
//		}
//		ans[len] = '\0';
//		printf("%s\n", ans);
//	}
//	return 0;
//}