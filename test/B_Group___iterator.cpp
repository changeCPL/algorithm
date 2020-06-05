//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<map>
//#include<set>
//using namespace std;
//int input[105];
//int group[105];
//int main() {
//	int k;
//	cin >> k;
//	while (k--) {
//		int n;
//		cin >> n;
//		set<int> inputset;
//		for (int i = 0; i < n; i++) {
//			cin >> input[i];
//			inputset.insert(input[i]);
//		}
//		set<int> groupid;
//		for (int i = 0; i < n; i++) {
//			cin >> group[i];
//			groupid.insert(group[i]);
//		}
//		for (set<int>::iterator it=groupid.begin(); it!=groupid.end(); it++) {
//			map<int,int> num;
//			for (set<int>::iterator inputnum=inputset.begin(); inputnum!=inputset.end(); inputnum++)
//				num[*inputnum] = 0;
//			printf("%d={",*it);
//			for (int i = 0; i < n; i++) {
//				if (group[i] == *it) {
//					num[input[i]]++;
//				}
//			}
//			for (set<int>::iterator inputnum = inputset.begin(); inputnum != inputset.end(); inputnum++) {
//				//这个技巧要记住,先判断是否输出','
//				if (inputnum != inputset.begin())
//					printf(",");
//				printf("%d=%d", *inputnum, num[*inputnum]);
//			}
//			printf("}\n");
//		}
//	}
//	return 0;
//}