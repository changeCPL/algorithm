//#include "BinarySearch.h"
//
////�ϸ��������A,����ұգ���ʼ����[0,n-1]���ɹ�����x�±꣬����-1
//int binary_search(int A[], int left, int right, int x) {
//	int mid;
//	while (left <= right) {		//left>right˵���Ҳ���x
//		mid = left + (right - left) / 2;     //��ֹ�����Ͻ糬��int��Χһ�룬left+right���
//		if (A[mid] == x)
//			return mid;
//		else if (A[mid] > x) {
//			right = mid-1;
//		}
//		else
//			left = mid+1;
//	}
//	return -1;
//}
//
////��������A�����ص�һ�����ڵ���x��λ�ã�����ұգ���ʼ����[0,n]
//int lower_bound(int A[], int left, int right, int x) {
//	int mid;
//	while (left < right) {  //left==rightʱ�ҵ�Ψһλ��
//		mid = left + (right - left) / 2;
//		if (A[mid] >= x)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}
////��������A�����ص�һ������x��λ�ã�����ұգ���ʼ����[0,n]
//int upper_bound(int A[], int left, int right, int x) {
//	int mid;
//	while (left < right) {  //left==rightʱ�ҵ�Ψһλ��
//		mid = left + (right - left) / 2;
//		if (A[mid] > x)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}
////Ѱ���������е�һ������ĳ������Ԫ��λ�õ�ģ��
////[left,right],��ֵ���븲�ǽ�����п���ȡֵ
////���Ҫ�����һ������ĳ����C��Ԫ��λ�ã����Ա�Ϊ�ҵ�һ������!C���±꣬��-1
//int solve(int left, int right) {
//	bool flag;//ĳ����
//	int mid;
//	while (left < right) {  //left==rightʱ�ҵ�Ψһλ��
//		mid = left + (right - left) / 2;
//		if (flag)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}