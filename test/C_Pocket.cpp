//#include<cstdio>
//#define MAX 25
//const int V_aim = 40;
//int n,V[MAX],ans=0;
//void solutions(int index ,int V_sum) {
//	if (index >= n)return;
//	if (V[index] + V_sum >= V_aim) {
//		if(V[index] + V_sum == V_aim)
//			ans++;
//		solutions(index + 1, V_sum);
//	}
//	else {
//		solutions(index + 1, V_sum);
//		solutions(index + 1, V_sum + V[index]);
//	}
//}
//int main() {
//	if (EOF)
//		printf("EOF!=0\n");
//	while (scanf("%d",&n)!=EOF){    //一定要写成!=EOF,不然输入遇到eof还是会进入循环，导致输出超限
//		int temp_sum = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d",&V[i]);
//			temp_sum += V[i];
//		}
//		if (temp_sum < V_aim) {
//			printf("0\n");
//			continue;
//		}
//		ans = 0;
//		int V_sum = 0;
//		solutions(0, V_sum);
//		printf("%d\n",ans);
//	}
//	return 0;
//}