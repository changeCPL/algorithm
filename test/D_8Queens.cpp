//#include<cstdio>
//#include<algorithm>
//const int n = 9;
//int hastab[n] = {}, P[n] = {};
//char ans[93][9];
//int num = 1;
//void generateP(int index) {  //Ϊ��index�еĻʺ�ѡ����λ��
//	if (index == n + 1) {	//�ݹ�߽磬����һ���Ϸ�����
//		/*for (int i = 1; i < 9; i++)
//			ans[num][i-1] = '0' + P[i];
//		ans[num][8] = '\0';
//		num++;*/
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (hastab[i] == 0) {  //��i�л�û�лʺ�
//			bool flag = true;  //����λ���Ƿ���ǰ��Ļʺ��ͻ
//			for (int j = 1; j < index; j++) {
//				if (abs(index - j) == abs(i - P[j])) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag) {  //���Է��ڵ�i��
//				P[index] = i;
//				hastab[i] = 1;
//				generateP(index + 1);
//				hastab[i] = 0;
//			}
//		}
//	}
//	return;
//}
//int main() {
//	generateP(1);
//	int index,k;
//	/*for (int i = 1; i < 93; i++)
//		printf("%d:%s\n", i, ans[i]);*/
//	/*while (scanf("%d", &k) != EOF) {
//		for (int i = 0; i < k; i++){
//			scanf("%d", &index);
//			printf("%s\n", ans[index]);
//		}
//	}*/
//	return 0;
//}