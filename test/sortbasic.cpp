//#include <iostream>
//#include <cstring>
//#define maxn 105
//using namespace std;
////C++ algorithmͷ�ļ����swap�������������ã�void swap ( T& a, T& b )
//void swap(int *a, int *b) {
//	int temp=*a;
//	*a = *b;
//	*b = temp;
//}
////ð������,n-1�ˣ�ÿ�ΰѵ�ǰʣ��Ԫ�ص����ֵ�Ƶ�����(����)
//void bubbble_sort(int array[], int len) { 
//	for (int i = 0; i <  len - 1; i++) {
//		for (int j = 0 ; j < len-i-1; j++) {
//			if (array[j] > array[j+1])
//				swap(&array[j], &array[j+1]);
//		}
//	}
//}
////ѡ������n-1�ˣ���i�˴�a[i]~a[n-1]�м�ѡ����С��Ԫ����a[i]����
//void select_sort(int array[], int len) {
//	for (int i = 0; i < len; i++) {
//		int cur_min = i;
//		for (int j = i + 1; j < len; j++) {
//			if (array[j] < array[cur_min])
//				cur_min = j;
//		}
//		if(cur_min!=i)  //���Ҳ����Ҳ�����Ѻܶ�ʱ��
//			swap(&array[i], &array[cur_min]);
//	}
//}
////��������n-1�ˡ���a[1]��ʼ�����Ͻ�Ԫ�ز���ǰ��������Ĳ��֣������������
//void insert_sort(int array[], int len) {
//	for (int i = 1; i < len; i++) {
//		int temp = array[i];  //�ݴ������Ԫ��
//		int j = i;
//		while (j > 1 && temp < array[j - 1]) {  //������Ԫ��С�ڵ�ǰ������ĳԪ�أ�����
//			array[j] = array[j - 1];
//			j--; //������ǰ����
//		}
//		array[j] = temp; //ѭ������������λ��Ϊj
//	}
//}
//int main() {
//	int x[maxn] = {};
//	int n=0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n;i++)
//		scanf_s("%d", &x[i]);
//	select_sort(x,n);
//	//memset(x, 0, sizeof(x));  //stringͷ�ļ�memset��byte��ֵ��һ�㸳0��-1����Ϊ����ֱ�ȫ0��ȫ1�����˳���
//	//fill(x,x+n,value);  //algorithmͷ�ļ�����x[0]~x[n-1]n��Ԫ�ظ�ֵvalue
//	for (int i = 0; i < n; i++)
//		printf("%d ", x[i]);
//	return 0;
//}