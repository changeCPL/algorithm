//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
//const int MAX = 105;
////������A����������������ϲ�,L2=R1+1,��Ϊ������
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
////��A[left]-A[right]�鲢����
//void mergesort(int A[], int left, int right) {
//	if (left < right) {
//		int mid = left + (right - left) / 2;
//		mergesort(A, left, mid);
//		mergesort(A, mid + 1, right);
//		merge(A, left, mid, mid + 1, right);
//	}
//}
////������[left,right]���л��֣�ʹ�÷��ص��±����Ԫ�ز����������ұ�Ԫ��ȫ����
//int partition(int A[], int left, int right) {
//	int temp = A[left];
//	while (left < right) {
//		while (left < right&&A[right] > temp)right--; //����right��С����Ԫ��Ԫ��
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
//		quicksort(A, left, pos - 1);  //����������п���
//		quicksort(A, pos + 1, right); //����������п���
//	}
//}
////������Ԫû�аѵ�ǰ���仮��Ϊ�������Ƚӽ��������䣬���Ե�Ԫ���������ʱЧ�����
////��Ԫ�ؽӽ�����ʱ��ʱ�临�ӶȻ�ﵽO(n^2),�Ľ��취ʱ���ѡ����Ԫ������ʱ�临�Ӷ�ΪO(nlogn)
//
//void swap(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int randpartition(int A[], int left, int right) {
//	//����[left,right]�������
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