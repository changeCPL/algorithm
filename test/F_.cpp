//#include<cstdio>
//#include<algorithm>
//using namespace	std;
//#define eps 1e-8
//int P[105];
//int main() {
//	int k;
//	scanf("%d", &k);
//	while (k--) {
//		int n, V;
//		double W;
//		scanf("%d %d %lf", &n, &V, &W);
//		for (int i = 0; i < n; i++)
//			scanf("%d", &P[i]);
//		sort(P, P + n);
//		if (P[0] > W) {
//			printf("0 0.00\n");
//			continue;
//		}
//		int sum = 0;
//		double P_final = 0.00;
//		for (int i = 0; i < n; i++) {
//			if ((P_final + P[i]) / (sum + 1) - W>eps)
//				break;
//			else {
//				sum++;
//				P_final += P[i];
//			}
//		}
//		P_final = P_final/ (100*sum);
//		printf("%d %.2f\n", sum*V, P_final);
//	}
//	return 0;
//}