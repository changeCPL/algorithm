////#include<cstdio>
//#include<map>
//#include<string>
//#include<iostream> //���� <iostream> ����ʹ�� std::string Ӧ����ȷ���ģ�������һ���ȼ��ڰ��� <string> 
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
//		//�״��:������һ���ַ�����ĸ�����֣���ô��������word�����ᱻʶ������Ҫ���ж�һ��
//		if (!pattern.empty())mp[pattern] += 1;
//		len = mp.size();
//		int maxfreq = 0;
//		for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
//			if (it->second > maxfreq) {
//				maxfreq = it->second;
//				pattern = it->first;
//			}
//		}
//		printf("%s %d\n", pattern.c_str(), maxfreq);//string����ֻ��cin��cout������c_str()ת��Ϊ�ַ�������printf;
//	}
//	return 0;
//}