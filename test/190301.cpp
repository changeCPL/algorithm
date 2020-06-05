//#include<cstdio>
//#include<vector>
//using namespace std;
//int main() {
//	vector<int> input;
//	float MID;
//	int n, x, MAX, MIN,flag=0;
//	scanf("%d", &n);
//	if (n) {
//		scanf("%d", &x);
//		MAX = x;
//		MIN = x;
//		input.push_back(x);
//		for (int i = 1; i < n; i++) {
//			scanf("%d", &x);
//			input.push_back(x);
//			if (x > MAX)MAX = x;
//			if (x < MIN) MIN = x;
//		}
//		if (n % 2 != 0)MID = input[n / 2];
//		else{
//			x = input[n / 2 - 1] + input[n / 2];
//			if (x % 2 == 0) {MID = x / 2;}
//			else { flag = 1; MID = (float)x / 2;}
//		}
//		printf("%d ", MAX);
//		if (flag)printf("%.1f ", MID); else printf("%.0f ", MID);
//		printf("%d\n", MIN);
//	}
//	return 0;
//}