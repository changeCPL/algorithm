////易错点1:查找给定的字符串不区分大小写
////易错点2:判断不匹配时的字符刚好和给定字符串第一个相同，此时要重新进入判断
////易错点3:在匹配过程中要跳过空格
//#include<cstdio>
//#include<cstring>
//#include<cctype>
//#define MAX 105
//int main() {
//	char flag[MAX];
//	char c,temp[MAX];
//	scanf("%s", flag);
//	getchar();//吸收换行
//	int len = strlen(flag);
//	for (int i = 0; i < len; i++) {  //标记字符串先转换为小写
//		if (isupper(flag[i])) flag[i] += 32;
//	}
//	//printf("flag:%s\n", flag);
//	while ((c = getchar()) != EOF) {
//		if (c == ' ')continue;
//		else if (c == flag[0]||(isupper(c)&&(c+32)==flag[0])) {
//			temp[0] = flag[0];
//			for (int i = 1; i < len; i++) {
//				if ((c = getchar()) == EOF)return 0;
//				if (c == ' ') { i--; continue;}//忽略标志字符串中间的空格
//				//printf("c:%c ", c);
//				if (c == flag[i] || (isupper(c) && (c + 32) == flag[i]))temp[i] = flag[i];
//				else if (c==flag[0] || (isupper(c) && (c + 32) == flag[0])) { //!!!重新开始判断
//					temp[i] = '\0';
//					printf("%s", temp);
//					temp[0] = flag[0];
//					i = 0;
//				}
//				else{
//					temp[i++] = c;
//					temp[i] = '\0';
//					printf("%s", temp);
//					break;
//				}
//			}
//		}
//		else printf("%c", c);
//	}
//	return 0;
//}