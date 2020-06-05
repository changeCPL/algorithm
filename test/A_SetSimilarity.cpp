//#include<cstdio>
//#include<set>
//using namespace std;
//const int MAX = 55;
//set<int>in_sets[MAX];
//int N_c, N_t;
//int cal(int index1, int index2) {
//	int num = 0;
//	set<int>::iterator s1 = in_sets[index1].begin();
//	set<int>::iterator s2 = in_sets[index2].begin();
//	for (; s1!=in_sets[index1].end()&& s2 != in_sets[index2].end();) {
//		if (*s1==*s2) {
//			num++;
//			s1++;
//			s2++;
//		}
//		else if (*s1 < *s2) {
//			s1++;
//		}
//		else
//			s2++;
//	}
//	return num;
//}
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		int ele_num,ele;
//		scanf("%d", &ele_num);
//		for (int j = 0; j < ele_num; j++) {
//			scanf("%d", &ele);
//			in_sets[i].insert(ele);
//		}
//	}
//	int k,index1,index2;
//	double ans;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++) {
//		scanf("%d %d", &index1, &index2);
//		N_t = in_sets[index1].size() + in_sets[index2].size();
//		N_c = cal(index1, index2);
//		ans = (double)N_c/(double)(N_t-N_c)*100;  //注意要先强制类型转换再除
//		printf("%.1f%%\n", ans);
//	}
//	return 0;
//}