//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//char ans[105];
//char num2ch(int num) {
//	if (num < 10)
//		return('0' + num);
//	else{
//		switch (num)
//		{
//		case 10:
//			return 'A';
//		case 11:
//			return 'B';
//		case 12:
//			return 'C';
//		case 13:
//			return 'D';
//		case 14:
//			return 'E';
//		case 15:
//			return 'F';
//		default:
//			break;
//		}
//	}
//}
//int trans(int base, char input[], int aimbase) {
//	long long deci = 0;
//	int len0 = strlen(input);
//	int curnum = 0;
//	for (int i = 0; i < len0; i++) {
//		//����ABCDEF��Сд��16��������Ҫ�ǵ�ת��
//		curnum = (!isalpha(input[i])) ? (input[i] - '0') : (islower(input[i]) ? (10 + input[i] - 'a') : (10 + input[i] - 'A'));
//		deci = deci*base + curnum;
//	}
//	//printf("deci:%d\n", deci);
//	int len = 0;//ת�������ֳ���
//	int lo, hi; //�̺�����
//	do {
//		lo = deci / aimbase;
//		hi = deci % aimbase;
//		deci = lo;
//		ans[len] = num2ch(hi);
//		len++;
//	} while (lo != 0);
//	for (int i = len - 1; i >= 0; i--)
//		printf("%c", ans[i]);
//	printf("\n");
//	return len;
//}
//int main() {
//	int base, aimbase;
//	char input[100];
//	while (scanf("%d %s %d", &base,input,&aimbase)!=EOF) {
//		trans(base, input, aimbase);
//	}
//	return 0;
//}