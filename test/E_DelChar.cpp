////!!scanf %s从第一个非空白字符开始(吸收开始的空白字符)，遇到空白字符结束且不吸收该末尾空白字符,下一次读缓冲区还是从这个\n
////!!gets_s遇到\n则结束(读一行不算\n),之后getchar()和scanf %c或%s不会读这个\n
//#include<cstdio>
//#include<cstring>
//#define MAX 105
//char s[MAX];
//int main() {
//	char c;
//	int len;
//	while (gets_s(s, MAX) != NULL) {
//		len = strlen(s);
//		//getchar();//getchar()不会读取gets末尾的换行
//		//c = getchar();
//		scanf("%c", &c);  //scanf("%c")也不会读取gets末尾的换行
//		getchar();//吸收输入字符后的回车符
//		//printf("s:%s,c:%c\n", s, c);
//		for (int i = 0; i < len; i++) {
//			if (s[i] != c)
//				printf("%c", s[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}