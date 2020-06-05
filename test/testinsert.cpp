////#include<iostream>
////#include<vector>
////using namespace std;
////
////int main() {
////	vector<vector<int>> v = { {0,0} };
////	vector<int>temp = { 1,1 };
////	v.insert(v.begin(), temp);
////	for (int i = 0; i < v.size(); i++) {
////		for (int j = 0; j < v[i].size(); j++)
////			cout << v[i][j] << " ";
////		cout << endl;
////	}
////	return 0;
////}
//
//#include<cstdio>
//#include<cmath>
//int primelist[10000] = { 0 }, index = 0;
//bool isprime(int x) {
//	if (x <= 1)return false;
//	int sqr = (int)sqrt(1.0*x);
//	for (int i = 2; i<=sqr; i++) {
//		if (x%i == 0)return false;
//	}
//	return true;
//}
//void calprime() {
//	for (int x = 2; x <= 10000; x++) {
//		if (isprime(x)) primelist[index++] = x;
//	}
//}
//void printprime(int n) {
//	int num = 0;
//	for (int i = 0; i<index; i++) {
//		if (primelist[i]>n)break;
//		if (primelist[i] % 10 == 1) {
//			if (num)printf(" ");
//			printf("%d", primelist[i]);
//			num++;
//		}
//	}
//	if (!num)printf("-1");
//	printf("\n");
//}
//int main() {
//	calprime();
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		printprime(n);
//	}
//	return 0;
//}