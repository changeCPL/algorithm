//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int input[10][10];
//int ans[25];
//bool cmp(int a, int b) {
//	return (a > b);
//}
//int main() {
//	int m,num;
//	int tempsum, maindia, auxidia;  
//	while (scanf("%d", &m) != EOF) {
//		//����������ˣ�һ���ǵ���ѭ�����ڶ���ʱ����resetΪ0
//		num = 0;
//		maindia = 0;
//		auxidia = 0;
//		
//		for (int i = 0; i < m; i++) {
//			//һ���ǵ���ѭ�����ڶ���ʱ����resetΪ0
//			tempsum = 0; //�µ�һ�кͣ���ʼΪ0
//			for (int j = 0; j < m; j++) {
//				scanf("%d", &input[i][j]);
//				tempsum += input[i][j];
//				if (i == j)maindia += input[i][j];
//				if (i + j == m - 1)auxidia += input[i][j];
//			}
//			ans[num++] = tempsum;
//		}
//		ans[num++] = maindia;
//		ans[num++] = auxidia;
//		for (int j = 0; j < m; j++) {
//			tempsum = 0;
//			for (int i = 0; i < m; i++) {
//				tempsum += input[i][j];
//			}
//			ans[num++] = tempsum;
//		}
//		sort(ans, ans + num, cmp);
//		for (int i = 0; i < num; i++) {
//			printf("%d", ans[i]);
//			if (i != num - 1)printf(" ");
//			else printf("\n");
//		}
//	}
//	return 0;
//}