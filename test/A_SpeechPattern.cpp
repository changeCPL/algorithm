////#include<cstdio>
//#include<map>
//#include<string>
//#include<iostream> //包含 <iostream> 后能使用 std::string 应该是确定的，不过不一定等价于包含 <string> 
//using namespace std;
//const int MAX = 1050000;
//map <string, int> mp;
//char input[MAX];
//int main() {
//	/*mp["123"] += 1;
//	printf("%d\n", mp["123"]);
//	mp["123"] += 1;
//	printf("%d\n", mp["123"]);*/
//	string pattern="";
//	while (gets_s(input, MAX) != NULL) {
//		mp.clear();
//		int len = strlen(input);
//		bool flag = 0;
//		for (int i = 0; i < len; i++) {
//			if (isalnum(input[i])) {
//				pattern += tolower(input[i]);
//				flag = 1;
//			}
//			else {
//				if (flag) {
//					mp[pattern] += 1;
//					pattern.clear();
//				}
//				flag = 0;
//			}
//		}
//		//易错点:如果最后一个字符是字母或数字，那么其所属的word将不会被识别，所以要多判断一次
//		if (!pattern.empty())mp[pattern] += 1;
//		len = mp.size();
//		int maxfreq = 0;
//		for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
//			if (it->second > maxfreq) {
//				maxfreq = it->second;
//				pattern = it->first;
//			}
//		}
//		printf("%s %d\n", pattern.c_str(), maxfreq);//string容器只能cin，cout或者用c_str()转换为字符数组再printf;
//	}
//	return 0;
//}