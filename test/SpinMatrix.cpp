////首先输入一个5*5的数组，然后输入一行x,y,a,b
////a==1,顺时针90°,a==2，逆时针90°
////x y，b代表需操作数据为以x y为左上角的b*b个矩阵
//
////将旋转操作分解成上下/左右翻转+沿对角线反转
//#include<cstdio>
//const int MAX = 10;
//int X[MAX][MAX][MAX];
//
//void swap(int *x, int *y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void up_down(int(&a)[MAX][MAX], int x,int y,int k) {
//	for (int i = 0; i < k / 2; i++) {
//		for (int j = 0; j < k; j++) {
//			swap(&a[x + i][y + j], &a[x + k - 1 - i][y + j]);
//		}
//	}
//}
//void left_right(int(&a)[MAX][MAX], int x, int y, int k) {
//	for (int j = 0; j < k / 2; j++) {
//		for (int i = 0; i < k; i++) {
//			swap(&a[x + i][y + j], &a[x + i][y + k - 1 - j]);
//		}
//	}
//}
////易错点：由于顶点坐标为(x，y),此矩阵的对角线反转不能直接将纵横坐标对换得到对称点坐标
//void diag(int(&a)[MAX][MAX], int x, int y, int k) {
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < i; j++) {
//			swap(&a[x + i][y + j], &a[x + j][y + i]);
//		}
//	}
//}
//void display(int(&a)[MAX][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d", a[i][j]);
//			if (j < n - 1)printf(" ");
//		}
//		printf("\n");
//	}
//}
//bool isequal(int(&x)[MAX][MAX], int(&y)[MAX][MAX],int n) {
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (x[i][j] != y[i][j])return false;
//	return true;
//}
//void judge(int(&x)[MAX][MAX], int(&y)[MAX][MAX], int n) {
//	if (isequal(x, y, n)) {
//		printf("0\n"); return;
//	}
//	up_down(x, 0, 0, n);
//	diag(x, 0, 0, n);
//	if (isequal(x, y, n)) {
//		printf("90\n"); return;
//	}
//	up_down(x, 0, 0, n);
//	diag(x, 0, 0, n);
//	if (isequal(x, y, n)) {
//		printf("180\n"); return;
//	}
//	up_down(x, 0, 0, n);
//	diag(x, 0, 0, n);
//	if (isequal(x, y, n)) {
//		printf("270\n"); return;
//	}
//	printf("-1\n");
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int k = 0; k < 2;k++)
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				scanf("%d", &X[k][i][j]);
//	judge(X[0], X[1], n);
//	return 0;
//}