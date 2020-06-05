//#include<iostream>
//using namespace std;
//int main() {
//	int treenum, r,T=0,k=1,P=0;
//	cin >> treenum >> r;
//	int apple, a,asum;
//	for (int i = 1; i <= treenum; i++) {
//		asum = 0;
//		cin >> apple;
//		T += apple;
//		for (int j = 0; j < r; j++) {
//			cin >> a;
//			asum +=(0 - a);
//		}
//		if (asum > P) { k = i; P = asum; }
//		T -= asum;
//	}
//	cout << T << " " << k << " " << P << endl;
//	return 0;
//}