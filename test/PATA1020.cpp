//#include<cstdio>
//#include<queue>
//using namespace std;
//const int MAXN = 50;
//int n,postorder[MAXN], inorder[MAXN];
//struct node {
//	int val;
//	node* lchild;
//	node* rchild;
//	node(int v) :val(v), lchild(NULL), rchild(NULL) {}
//};
////postorder & inorder sequences to rebuild a binary tree
//node *create(int postl, int postr, int inl, int inr) {
//	if (postl > postr)return NULL;
//	node *root = new node(postorder[postr]);
//	int k;
//	for (k = inl; k <= inr; k++) {
//		if (inorder[k] == postorder[postr])break;
//	}
//	int leftnum = k - inl;
//	root->lchild = create(postl, postl + leftnum - 1, inl, k - 1);
//	root->rchild = create(postl + leftnum, postr - 1, k + 1, inr);
//	return root;
//}
////print in layer order using BFS
//int num = 0;
//void bfs(node *root) {
//	queue<node*> q;
//	q.push(root);
//	while (!q.empty()){
//		node*cur = q.front();
//		printf("%d", cur->val);
//		q.pop();
//		num++;
//		if (num < n)printf(" ");
//		if (cur->lchild)q.push(cur->lchild);
//		if (cur->rchild)q.push(cur->rchild);
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &postorder[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &inorder[i]);
//	}
//	node *root = create(0, n - 1, 0, n - 1);
//	bfs(root);
//	return 0;
//}