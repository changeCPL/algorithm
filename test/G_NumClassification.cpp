//#include<stdio.h>
//int A1 = 0, A2 = 0,flag=0, turn = 1, A3 = 0, A4_num=0,flag4=0,A5 = 0;
//float A4=0;
//void deal_one(int x) {
//	int m = x % 5;
//	switch (m)
//	{
//	case 0:
//		if (x % 2 == 0) 
//			A1 += x;
//		break;
//	case 1:
//		flag = 1;
//		A2 = (turn == 1) ? (A2 + x) : (A2 - x);
//		turn = 1-turn;
//		break;
//	case 2:
//		A3++;
//		break;
//	case 3:
//		flag4 = 1;
//		A4_num++;
//		A4 += x;
//		break;
//	case 4:
//		if (x > A5)A5 = x;
//		break;
//	default:
//		break;
//	}
//}
//void out(int x) {
//	if (x == 0)printf("N");
//	else printf("%d", x);
//}
//int main() {
//	int n,x;
//	scanf("%d", &n);
//	while (n--){
//		scanf("%d", &x);
//		deal_one(x);
//	}
//	out(A1); printf(" ");
//	if (flag)
//		printf("%d ", A2);
//	else 
//		printf("N ");
//	out(A3); printf(" ");
//	if (flag4)printf("%.1f ", (float)(A4 / A4_num));
//	else printf("N ");
//	out(A5);
//	return 0;
//}