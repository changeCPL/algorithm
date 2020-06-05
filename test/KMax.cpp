//#include<cstdio>
//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
//const int MAX = 1000005;
//int input[MAX] = {};
//void swap(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////求第K大，使用降序更方便
//int randpartition(int A[], int left, int right) {
//	//生成[left,right]内随机数
//	int p = round(1.0*rand() / RAND_MAX*(right - left) + left);
//	swap(&A[p], &A[left]);
//	int temp = A[left];
//	while (left < right) {
//		while (left < right&&A[right] <= temp)right--;
//		A[left] = A[right];
//		while (left < right&&A[left] > temp)left++;
//		A[right] = A[left];
//	}
//	A[left] = temp;
//	return left;
//}
//void quicksort(int A[], int left, int right) {
//	if (left < right) {
//		int pos = randpartition(A, left, right);
//		quicksort(A, left, pos - 1);
//		quicksort(A, pos + 1, right);
//	}
//}
////直接快排需O(nlogn),使用随机选择算法可以达到O(n)的期望
//int randselect(int A[], int left, int right, int k) {
//	if (left == right)return A[left];
//	int p = randpartition(A, left, right); 
//	int M = p - left + 1;  //即A[p]为第M大
//	if (M == k)return A[p];
//	else if (M>k) {		 //往左递归
//	  	return randselect(A, left, p-1, k); 
//	}
//	else {
//		return randselect(A, p + 1, right, k - M);
//	}
//}
//int main() {

//	int n,k;
//	while (scanf("%d %d", &n,&k) != EOF) {
//		for (int i = 0; i < n; i++)
//			scanf("%d", &input[i]);
//		printf("%d\n", randselect(input,0,n-1,k));
//	}
//	return 0;
//}
