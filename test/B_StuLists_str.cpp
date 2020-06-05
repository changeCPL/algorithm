////string类只能用cin读入，cout输出，若要用printf，得str.c_str();
////scanf() doens't support any C++ classes. 
////However, you can store the result from scanf() into a std::string:
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//vector<string>course[2505];
//int main() {
//	int N, K;
//	scanf("%d %d", &N, &K);
//	string name;
//	int c;
//	for (int i = 0; i < N; i++) {
//		cin >> name >> c;
//		int courseid;
//		for (int j = 0; j < c; j++) {
//			scanf("%d", &courseid);
//			course[courseid].push_back(name);
//		}
//	}
//	for (int i = 1; i <= K; i++) {
//		int stunum = course[i].size();
//		printf("%d %d\n", i, stunum);
//		sort(course[i].begin(), course[i].end());
//		for (int j = 0; j < stunum; j++) {
//			cout<<course[i][j]<<endl;
//		}
//	}
//	return 0;
//}