//#include<cstdio>
//const int MAX = 100005;
//struct Node {
//	char data;
//	int next;
//	bool flag;
//}node[MAX];
//
//int main() {
//	int s1, s2, n;
//	scanf("%d %d %d", &s1, &s2, &n);
//	int addr,next;
//	char c;
//	for (int i = 0; i < n; i++) {
//		scanf("%d %c %d", &addr,&c,&next);
//		node[addr].data = c;
//		node[addr].next = next;
//		node[addr].flag = false;
//	}
//	for (int i = s1; i != -1; i = node[i].next) {
//		node[i].flag = true;
//	}
//	for (int i = s2; i != -1; i = node[i].next) {
//		if (node[i].flag) {
//			printf("%05d", i);
//			return 0;
//		}
//	}
//	printf("-1");
//	return 0;
//}