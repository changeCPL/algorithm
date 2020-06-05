//#include<cstdio>
//int main() {
//	char ans[205];
//	char input[205];
//	int len;
//	while (gets_s(input) != NULL) {  //codeup编译不能通过，只能用gets。但是c11之后gets就被gets_s取代
//		len = 0; //新输入，从0开始
//		for (int i = 0; input[i] != '\0'; i++) {
//			if (input[i] != ' ') {
//				ans[len++] = input[i];
//			}
//		}
//		ans[len] = '\0';
//		printf("%s\n", ans);
//	}
//	return 0;
//}