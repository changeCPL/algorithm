//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 1005
//struct  MOONCAKE
//{
//	double store;
//	double total;
//	double price;
//}mooncake[MAX];
//bool cmp(MOONCAKE A, MOONCAKE B) {
//	return(A.price > B.price);
//}
//int main() {
//	int n;
//	double demand;
//	scanf("%d %lf", &n, &demand);
//	for (int i = 0; i < n; i++)
//		scanf("%lf", &mooncake[i].store);
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &mooncake[i].total);
//		mooncake[i].price = mooncake[i].total / mooncake[i].store;
//	}
//	sort(mooncake, mooncake + n, cmp);
//	double profit = 0;
//	for (int i = 0; i < n; i++) {
//		if (mooncake[i].store >= demand) {
//			profit += demand*mooncake[i].price;
//			break;
//		}
//		else{
//			profit += mooncake[i].total;
//			demand -= mooncake[i].store;
//		}
//	}
//	printf("%.2f\n", profit);
//	return 0;
//}