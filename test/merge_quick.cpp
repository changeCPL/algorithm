//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
//const int MAX = 105;
////将数组A的两个有序子区间合并,L2=R1+1,均为闭区间
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
////对A[left]-A[right]归并排序
//void mergesort(int A[], int left, int right) {
//	if (left < right) {
//		int mid = left + (right - left) / 2;
//		mergesort(A, left, mid);
//		mergesort(A, mid + 1, right);
//		merge(A, left, mid, mid + 1, right);
//	}
//}
////对区间[left,right]进行划分，使得返回的下标左边元素不大于它，右边元素全大于
//int partition(int A[], int left, int right) {
//	int temp = A[left];
//	while (left < right) {
//		while (left < right&&A[right] > temp)right--; //左移right至小于主元的元素
//		A[left] = A[right];
//		while (left < right&&A[left] <= temp)left++;
//		A[right] = A[left];
//	}
//	A[left] = temp;
//	return left;
//}
//void quicksort(int A[], int left, int right) {
//	if (left < right) {
//		int pos = partition(A, left, right);
//		quicksort(A, left, pos - 1);  //左子区间进行快排
//		quicksort(A, pos + 1, right); //右子区间进行快排
//	}
//}
////由于主元没有把当前区间划分为两个长度接近的子区间，所以当元素排列随机时效率最高
////当元素接近有序时，时间复杂度会达到O(n^2),改进办法时随机选择主元，期望时间复杂度为O(nlogn)
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