////�״��1:���Ҹ������ַ��������ִ�Сд
////�״��2:�жϲ�ƥ��ʱ���ַ��պú͸����ַ�����һ����ͬ����ʱҪ���½����ж�
////�״��3:��ƥ�������Ҫ�����ո�
//#include<cstdio>
//#include<cstring>
//#include<cctype>
//#define MAX 105
//int main() {
//	char flag[MAX];
//	char c,temp[MAX];
//	scanf("%s", flag);
//	getchar();//���ջ���
//	int len = strlen(flag);
//	for (int i = 0; i < len; i++) {  //����ַ�����ת��ΪСд
//		if (isupper(flag[i])) flag[i] += 32;
//	}
//	//printf("flag:%s\n", flag);
//	while ((c = getchar()) != EOF) {
//		if (c == ' ')continue;
//		else if (c == flag[0]||(isupper(c)&&(c+32)==flag[0])) {
//			temp[0] = flag[0];
//			for (int i = 1; i < len; i++) {
//				if ((c = getchar()) == EOF)return 0;
//				if (c == ' ') { i--; continue;}//���Ա�־�ַ����м�Ŀո�
//				//printf("c:%c ", c);
//				if (c == flag[i] || (isupper(c) && (c + 32) == flag[i]))temp[i] = flag[i];
//				else if (c==flag[0] || (isupper(c) && (c + 32) == flag[0])) { //!!!���¿�ʼ�ж�
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