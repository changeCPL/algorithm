//#include<cstdio>
//#include<vector>
//using namespace std;
//struct node{
//	int data;
//	node *lchild, *rchild;
//	node(int x):data(x),lchild(NULL),rchild(NULL){}
//};
//void insert(node* &root, int x) {
//	if (!root) { root = new node(x); return;}
//	else if (x >= root->data)insert(root->rchild, x);
//	else insert(root->lchild, x);
//}
//void preorder(node* root, vector<int> &v,bool mirror) {
//	if (!root)return;
//	v.push_back(root->data);
//	if (mirror) {
//		preorder(root->rchild, v, mirror);
//		preorder(root->lchild, v, mirror);
//	}
//	else {
//		preorder(root->lchild, v, mirror);
//		preorder(root->rchild, v, mirror);
//	}
//}
//
//void postorder(node* root, vector<int> &v, bool mirror) {
//	if (!root)return;
//	if (mirror) {
//		postorder(root->rchild, v, mirror);
//		postorder(root->lchild, v, mirror);
//	}
//	else {
//		postorder(root->lchild, v, mirror);
//		postorder (root->rchild, v, mirror);
//	}
//	v.push_back(root->data);
//}
//int main() {
//	vector<int>origin, pre, preM, post, postM;
//	int n,x;
//	node *root=NULL;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &x);
//		origin.push_back(x);
//		insert(root, x);
//	}
//	preorder(root, pre, 0);
//	preorder(root, preM, 1);
//	postorder(root, post, 0);
//	postorder(root, postM, 1);
//	if (origin == pre) {
//		printf("YES\n");
//		int len = post.size();
//		for (int i = 0; i < len; i++) {
//			printf("%d", post[i]);
//			if (i < len - 1)printf(" ");
//		}
//	}
//	else if (origin == preM) {
//		printf("YES\n");
//		int len = postM.size();
//		for (int i = 0; i < len; i++) {
//			printf("%d", postM[i]);
//			if (i < len - 1)printf(" ");
//		}
//	}
//	else printf("NO\n");
//	return 0;
