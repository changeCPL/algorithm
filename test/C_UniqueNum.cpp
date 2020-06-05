//#include<iostream>
//#include<cstring>
//#define MAX 100005
//using namespace std;
//int input[MAX];
//int hashtab[10005];
//int main() {
//	int n;
//	while (cin >> n) {
//		memset(hashtab, 0, sizeof(hashtab));
//		for (int i = 0; i < n; i++) {
//			cin >> input[i];
//			hashtab[input[i]]++;
//		}
//		int win_index = -1;
//		for (int i = 0; i < n; i++) {
//			if (hashtab[input[i]] == 1) {
//				win_index = i;
//				break;
//			}
//		}
//		if (win_index >= 0)
//			printf("%d\n", input[win_index]);
//		else
//			printf("None\n");
//	}
//	return 0;
//}