//#include<iostream>
//#include<cstring>
//#define MAX 105
//char input[MAX],A[MAX],B[MAX],temp[MAX];
//int main() {
//	//!!scanf %s从第一个非空白字符开始(吸收开始的空白字符)，遇到空白字符结束且不吸收该末尾空白字符,下一次读要注意吸收
//  //C11之后才将gets弃用，换成了gets_s()，一定要注意OJ的C++标准
//	//!!gets_s遇到\n则结束(读一行,\n不读入),之后getchar()和scanf %c或%s不会读这个\n，相当于吸收掉了
//	while (gets_s(input, MAX) != NULL) {  //每个测试样例三行输入，
//		//scanf("%s%s", A, B);//这样会出错，输入B之后回车，scanf遇到\n停止，但是下一次gets_s会从这个\n开始
//		gets_s(A, MAX);  
//		gets_s(B, MAX);
//		//printf("input:%s,A:%s,B:%s\n", input,A, B);
//		int lenA = strlen(A);
//		int leninput = strlen(input);
//		for (int i = 0;input[i]!='\0'; i++){
//			if (input[i] == A[0]) {
//				temp[0] = A[0];
//				int j;
//				for (j = 1; j < lenA; j++) {
//					i++; //继续读取下一个字符判断
//					if (input[i] == '\0') {i--; break; }//当前输入字符串结束
//					if (input[i] == A[j]) temp[j] = A[j];
//					else if(input[i]==A[0]){  //重新判断
//						temp[j] = '\0';
//						printf("%s", temp);
//						j = 0;
//					}
//					else {
//						temp[j] = '\0';
//						printf("%s%c", temp,input[i]);  //当前不匹配的字符要输出
//						break;
//					}
//				}
//				if (j == lenA)printf("%s", B);
//			}
//			else{
//				printf("%c", input[i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}