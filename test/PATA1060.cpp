//#include<iostream>
//#include<string>
//using namespace std;
//int n; //����
//string deal(string s, int &e){  //����s��׼��ʽ�����岿�֣���ָ���浽e
//	int k = 0;
//	while (s.length()>0 && s[0] == '0') { //ȥ��ǰ��0
//		s.erase(s.begin());
//	}
//	//�������������ȫ����0��ɾ��֮�󳤶�Ϊ0����s[0]Ϊ0(%d��%c�����)
//	if (s[0] == '.') {     //˵��ԭС��Ϊ000.xxxx��ʽ
//		s.erase(s.begin());
//		while (s.length() > 0 && s[0] == '0'){   //С�����ÿ����һ��0��ָ��e--
//			s.erase(s.begin());
//			e--;
//		}
//	}
//	else {   //˵��ԭС��Ϊ000abc.xxxx
//		while (k < s.length() && s[k] != '.') {  //��С���㣬����.��ָ��e++
//			k++;
//			e++;
//		}
//		if (k < s.length()) {  //˵����С����
//			s.erase(s.begin() + k);
//		}
//	}
//	if (s.length() == 0) {  //˵��Ϊȫ0
//		e = 0;
//	}
//	int num = 0;
//	k = 0;
//	string ans;
//	while (num < n) {  //����δ��n
//		if (k < s.length())ans += s[k++];
//		else ans += '0';  //���㲹0
//		num++;
//	}
//	return ans;
//}
//int main() {
//	string s1,s2,s3,s4;
//	cin >> n >> s1 >> s2;
//	int e1 = 0, e2 = 0;
//	s3 = deal(s1, e1);
//	s4 = deal(s2, e2);
//	if (s3 == s4&&e1 == e2) {
//		cout << "YES 0." << s3 << "*10^" << e1 << endl;
//	}
//	else {
//		cout << "NO 0." << s3 << "*10^" << e1 << " 0." << s4 << "*10^" << e2 << endl;
//	}
//	return 0;
//}