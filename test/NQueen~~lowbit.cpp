//////N皇后，不在同一行，列对角线。递归算法，n>10时就开始承受不住了
////#include<iostream>
////#include<algorithm>
////#include<cstring>
////using namespace std;
////#define MAX 10005
////int num, n,P[MAX],hastab[MAX];
////void generateP(int index) {  //为第index列的皇后选定行位置
////	if (index == n + 1) {	//递归边界，产生一个合法方案
////		num++;
////		return;
////	}
////	for (int i = 1; i <= n; i++) {
////		if (hastab[i] == 0) {  //第i行还没有皇后
////			bool flag = true;  //检查此位置是否与前面的皇后冲突
////			for (int j = 1; j < index; j++) {
////				if (abs(index - j) == abs(i - P[j])) {
////					flag = false;
////					break;
////				}
////			}
////			if (flag) {  //可以放在第i行
////				P[index] = i;
////				hastab[i] = 1;
////				generateP(index + 1);
////				hastab[i] = 0;
////			}
////		}
////	}
////	return;
////}
////int main() {
////	while (cin >> n) {
////		num = 0;
////		memset(hastab, 0, sizeof(hastab));
////		memset(P, 0, sizeof(P));
////		generateP(1);
////		cout << "n=" << n << ",ans=" << num << endl;
////	}
////	return 0;
////}
//
//
////位运算版本
//#include<iostream>
//using namespace std;
//int N;  //皇后个数，不能超过int表示范围
//int limit; //!!!列冲突上限，不是全1,而是末尾N位全1
//int ans = 0;  //方案数
//int depth = 0;
//void generateP(int row, int md, int sd) {  //三个参数的二进制，为1的位分别代表当前层会发生列冲突，主对角，副对角冲突
//	if (row != limit) {   //说明没放满
//		int pos = limit & ~(row | md | sd);//!!!当前层可放的位置(为1的位可放),必须用limit与，因为int的部分高位对于N<32不能使用
//		//printf("~(row | md | sd):%d,pos:%d\n",~(row | md | sd), pos);
//		while (pos!=0){  //枚举所有可放的位置检查
//			int p = pos&(-pos);  //最右边可放位置的二进制
//			pos ^= p;  //在pos中的该位置放置
//			//row | p,下一层列冲突
//			//(md | p) >> 1; 下一层主对角线冲突
//			//(sd | p) << 1; 下一层副对角线冲突
//			generateP(row | p, (md | p) >> 1, (sd | p) << 1); //！！不能直接修改row,md,ld，while循环体内是同一层，三者都不变
//		}
//	}
//	else
//		ans++;
//	return;
//}
//int main() {
//	while (cin >> N) {
//		limit = (1 << N) - 1;
//		//printf("limit:%o\n", limit);
//		ans = 0;
//		depth = 0;
//		generateP(0, 0, 0);
//		printf("%d queens solutions:%d\n",N,ans);
//	}
//	return 0;
//}