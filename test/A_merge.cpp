//#include<cstdio>
//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
//const int MAX = 100005;
//int input[MAX] = {};
//void merge(int A[], int L1, int R1, int L2, int R2) {
//	int i = L1, j = L2;
//	int temp[MAX], index = 0;
//	while (i <= R1&&j <= R2) {
//		if (A[i] <= A[j]) {
//			temp[index++] = A[i++];
//		}
//		else {
//			temp[index++] = A[j++];
//		}
//	}
//	while (i <= R1)temp[index++] = A[i++];
//	while (j <= R2)temp[index++] = A[j++];
//	for (int i = 0; i < index; i++)
//		A[L1 + i] = temp[i];
//}
//void mergesort(int A[], int left, int right) {
//	if (left < right) {
//		int mid = left + (right - left) / 2;
//		mergesort(A, left, mid);
//		mergesort(A, mid + 1, right);
//		merge(A, left, mid, mid + 1, right);
//	}
//}
//
//void swap(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int randpartition(int A[], int left, int right) {
//	//生成[left,right]内随机数
//	int p = round(1.0*rand()/RAND_MAX*(right-left)+left);
//	swap(&A[p], &A[left]);
//	int temp = A[left];
//	while (left < right) {
//		while (left < right&&A[right] > temp)right--; 
//		A[left] = A[right];
//		while (left < right&&A[left] <= temp)left++;
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
//int main() {
//	int n;
//	while (scanf("%d",&n)!=EOF) {
//		for (int i = 0; i < n; i++)
//			scanf("%d", &input[i]);
//		quicksort(input, 0, n - 1);
//		for (int i = 0; i < n; i++)
//			printf("%d\n", input[i]);
//	}
//	return 0;
//}