//#include<iostream>
//#include<string>
//using namespace std;
//int n; //精度
//string deal(string s, int &e){  //返回s标准形式的主体部分，将指数存到e
//	int k = 0;
//	while (s.length()>0 && s[0] == '0') { //去除前导0
//		s.erase(s.begin());
//	}
//	//！！！发现如果全部是0，删完之后长度为0，而s[0]为0(%d和%c均输出)
//	if (s[0] == '.') {     //说明原小数为000.xxxx形式
//		s.erase(s.begin());
//		while (s.length() > 0 && s[0] == '0'){   //小数点后每出现一个0，指数e--
//			s.erase(s.begin());
//			e--;
//		}
//	}
//	else {   //说明原小数为000abc.xxxx
//		while (k < s.length() && s[k] != '.') {  //找小数点，不是.则指数e++
//			k++;
//			e++;
//		}
//		if (k < s.length()) {  //说明有小数点
//			s.erase(s.begin() + k);
//		}
//	}
//	if (s.length() == 0) {  //说明为全0
//		e = 0;
//	}
//	int num = 0;
//	k = 0;
//	string ans;
//	while (num < n) {  //精度未到n
//		if (k < s.length())ans += s[k++];
//		else ans += '0';  //不足补0
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