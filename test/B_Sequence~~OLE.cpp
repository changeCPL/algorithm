////莫名其妙，用while(scnaf)就输出超限，改成while(cin)没事了？
////去掉循环(多点测试)就行了，没想到这个题咋又变成了单点测试
//
////问题解决
//// 1.scanf返回成功读入的数据项个数，出错或eof返回EOF(-1)
//// 2.对于cin >>返回值的类型是basic_istream&，代表cin的地址。在ios.h文件中定义了类型转换函数：
////   operator void *() const{ 
////	   if(state&(badbit|failbit) ) return 0;
////       return (void *)this; 
////	   }
//// 有这个函数定义后，需要时ios类型转换成void*类型。而在读入发生错误时或eof返回0
////3.所以写成while(scanf()),遇到eof返回-1,还是进入循环(!!if(n)只有n==0才为false)
////  而cin遇到eof返回0,不会进入循环，所以前者会因为没有循环没结束导致输出超限！！！
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