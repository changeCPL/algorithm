////��������string[]��Ȼ�����һ�����ַ�����Ҫ�����string[]�кͶ��ַ���������ƥ�䡣
////����кš�ƥ���ַ�����
////ƥ��ʱ�����ִ�Сд�����ҿ�����һ���������ű�ʾ��ģʽƥ�䡣
////�硰aa[123]bb��������˵aa1bb��aa2bb��aa3bb����ƥ�䡣
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