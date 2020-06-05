//#include <iostream>
//#include <cstring>
//#define maxn 105
//using namespace std;
////C++ algorithm头文件里的swap函数传递是引用，void swap ( T& a, T& b )
//void swap(int *a, int *b) {
//	int temp=*a;
//	*a = *b;
//	*b = temp;
//}
////冒泡排序,n-1趟，每次把当前剩余元素的最大值移到最右(升序)
//void bubbble_sort(int array[], int len) { 
//	for (int i = 0; i <  len - 1; i++) {
//		for (int j = 0 ; j < len-i-1; j++) {
//			if (array[j] > array[j+1])
//				swap(&array[j], &array[j+1]);
//		}
//	}
//}
////选择排序，n-1趟，第i趟从a[i]~a[n-1]中间选择最小的元素与a[i]交换
//void select_sort(int array[], int len) {
//	for (int i = 0; i < len; i++) {
//		int cur_min = i;
//		for (int j = i + 1; j < len; j++) {
//			if (array[j] < array[cur_min])
//				cur_min = j;
//		}
//		if(cur_min!=i)  //相等也交换也不会多费很多时间
//			swap(&array[i], &array[cur_min]);
//	}
//}
////插入排序，n-1趟。从a[1]开始，不断将元素插入前面已有序的部分，插入后仍有序
//void insert_sort(int array[], int len) {
//	for (int i = 1; i < len; i++) {
//		int temp = array[i];  //暂存待插入元素
//		int j = i;
//		while (j > 1 && temp < array[j - 1]) {  //待插入元素小于当前序列中某元素，后移
//			array[j] = array[j - 1];
//			j--; //继续往前插入
//		}
//		array[j] = temp; //循环结束，插入位置为j
//	}
//}
//int main() {
//	int x[maxn] = {};
//	int n=0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n;i++)
//		scanf_s("%d", &x[i]);
//	select_sort(x,n);
//	//memset(x, 0, sizeof(x));  //string头文件memset按byte赋值，一般赋0或-1，因为补码分别全0和全1，不宜出错
//	//fill(x,x+n,value);  //algorithm头文件，对x[0]~x[n-1]n个元素赋值value
//	for (int i = 0; i < n; i++)
//		printf("%d ", x[i]);
//	return 0;
//}