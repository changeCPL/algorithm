////读入数据string[]，然后读入一个短字符串。要求查找string[]中和短字符串的所有匹配。
////输出行号、匹配字符串。
////匹配时不区分大小写，并且可以有一个用中括号表示的模式匹配。
////如“aa[123]bb”，就是说aa1bb、aa2bb、aa3bb都算匹配。
//
//#include<cstdio>
//#include<cctype>
//#include<cstring>
//const int MAX = 1005;
//char s[MAX][MAX],aim[MAX];
//bool chequal(char x, char y) {
//	if (islower(x))x -= 32;
//	if (islower(y))y -= 32;
//	return (x == y);
//}
//
//bool isequal(char cur[], char aim[]) {
//	bool contain = 0;
//	for (int i = 0, j = 0;; i++,j++) {
//		if (aim[j] == '[') {	
//			do {
//				j++;
//				if (chequal(cur[i], aim[j]))contain = 1;
//			} while (aim[j] != ']');
//			if (!contain)return false;
//		}
//		else if (!chequal(cur[i], aim[j]))return false;
//		else if (cur[i] == '\0'&& aim[j] == '\0')return true;
//		else;
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%s", s[i]);
//	}
//	scanf("%s", aim);
//	for (int i = 1; i <= n; i++) {
//		if (isequal(s[i], aim))
//			printf("%d %s\n", i, s[i]);
//	}
//	return 0;
//}