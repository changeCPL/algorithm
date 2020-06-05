//#include "BinarySearch.h"
//
////严格递增序列A,左闭右闭，初始传入[0,n-1]，成功返回x下标，否则-1
//int binary_search(int A[], int left, int right, int x) {
//	int mid;
//	while (left <= right) {		//left>right说明找不到x
//		mid = left + (right - left) / 2;     //防止二分上界超过int范围一半，left+right溢出
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
////递增序列A，返回第一个大于等于x的位置，左闭右闭，初始传入[0,n]
//int lower_bound(int A[], int left, int right, int x) {
//	int mid;
//	while (left < right) {  //left==right时找到唯一位置
//		mid = left + (right - left) / 2;
//		if (A[mid] >= x)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}
////递增序列A，返回第一个大于x的位置，左闭右闭，初始传入[0,n]
//int upper_bound(int A[], int left, int right, int x) {
//	int mid;
//	while (left < right) {  //left==right时找到唯一位置
//		mid = left + (right - left) / 2;
//		if (A[mid] > x)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}
////寻找有序序列第一个满足某条件的元素位置的模板
////[left,right],初值必须覆盖解的所有可能取值
////如果要求最后一个满足某条件C的元素位置，可以变为找第一个满足!C的下标，再-1
//int solve(int left, int right) {
//	bool flag;//某条件
//	int mid;
//	while (left < right) {  //left==right时找到唯一位置
//		mid = left + (right - left) / 2;
//		if (flag)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	return left;
//}