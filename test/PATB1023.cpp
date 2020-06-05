//#include<cstdio>
//int num[10] = {};
//char ans[55];   //改进：不需要开这个数组存储答案，直接从小到大输出(当num[i]>0)
//int main() {
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &num[i]);
//	for (int i = 1; i < 10; i++) {
//		if (num[i] > 0) {
//			ans[0] = '0'+i;
//			num[i] -= 1;
//			break;
//		}
//	}
//	int index = 1;
//	for(int i = 0; i < 10; i++) {
//		for (int j = 0; j < num[i]; j++) {
//			ans[index++] = '0' + i;
//		}
//	}
//	ans[index] = '\0';
//	printf("%s\n", ans);
//	return 0;
//}