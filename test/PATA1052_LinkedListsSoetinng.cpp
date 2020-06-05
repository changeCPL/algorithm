//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int MAX = 100005;
//struct Node {
//	int addr;
//	int key;
//	int next;
//	bool flag;
//}node[MAX];
//bool cmp(Node A, Node B) {
//	if (!A.flag || !B.flag) {
//		return(A.flag > B.flag);
//	}
//	else {
//		return (A.key < B.key);
//	}
//}
//int main() {
//	for (int i = 0; i < MAX; i++)
//		node[i].flag = 0;
//	int n, head;
//	scanf("%d %d", &n, &head);
//	int addr;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &addr);
//		node[addr].addr = addr;
//		scanf("%d %d", &node[addr].key, &node[addr].next);
//	}
//	int count = 0;
//	for (int i = head; i != -1; i = node[i].next) {
//		node[i].flag = 1;
//		count++;
//	}
//	if (count == 0) {       //有效的节点数为0须特判
//		printf("0 -1\n");
//		return 0;
//	}
//	sort(node, node + MAX, cmp);
//	head = node[0].addr;
//	printf("%d %05d\n", count, head);
//	for (int i = 0; i < count; i++) {
//		if(i<count-1)
//			printf("%05d %d %05d\n", node[i].addr, node[i].key, node[i+1].addr);
//		else
//			printf("%05d %d %d\n", node[i].addr, node[i].key, -1);
//	}
//	return 0;
//}
