////Ī�������while(scnaf)��������ޣ��ĳ�while(cin)û���ˣ�
////ȥ��ѭ��(������)�����ˣ�û�뵽�����զ�ֱ���˵������
//
////������
//// 1.scanf���سɹ����������������������eof����EOF(-1)
//// 2.����cin >>����ֵ��������basic_istream&������cin�ĵ�ַ����ios.h�ļ��ж���������ת��������
////   operator void *() const{ 
////	   if(state&(badbit|failbit) ) return 0;
////       return (void *)this; 
////	   }
//// ����������������Ҫʱios����ת����void*���͡����ڶ��뷢������ʱ��eof����0
////3.����д��while(scanf()),����eof����-1,���ǽ���ѭ��(!!if(n)ֻ��n==0��Ϊfalse)
////  ��cin����eof����0,�������ѭ��������ǰ�߻���Ϊû��ѭ��û��������������ޣ�����
//
//
//#include<iostream>
//using namespace std;
//int fibo[21];
//int cal_fibo(int n) {
//	if (n == 0)
//		return 0;
//	else if (n == 1 || n == 2)
//		return 1;
//	else
//		return (cal_fibo(n - 1) + cal_fibo(n - 2));
//}
//void print_graph(int n) {
//	int ele_num = 2 * n - 1;
//	for (int i = 1; i <= n; i++) {
//		int left = n - i + 1;
//		int right = left + (2 * i - 2);
//		for (int j = 1; j <= ele_num; j++) {
//			if (j<left || j>right)
//				cout<<" ";
//			else
//				cout<<fibo[j - left];
//			if (j < ele_num)
//				cout<<" ";
//		}
//		cout << endl;
//	}
//	return;
//}
//int main() {
//	for (int i = 0; i < 21; i++) {
//		fibo[i] = cal_fibo(i);
//	}
//	int k;
//	cin >> k;
//	while (k--) {
//		int n;
//		cin >> n;
//		print_graph(n);
//	}
//	return 0;
//}