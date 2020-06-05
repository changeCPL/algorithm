//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode* create(int array[],int n) {
//	ListNode* head = new ListNode(0),*cur=head;
//	for (int i = 0; i < n; i++) {
//		cur->next = new ListNode(array[i]);
//		cur = cur->next;
//	}
//	cur = head;
//	head = head->next;
//	delete(cur);
//	return head;
//}
//void show(ListNode* head) {
//	while (head) {
//		cout << head->val << " ";
//		head = head->next;
//	}
//	cout << endl;
//}
////非递归
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//	ListNode* head = new ListNode(0);
//	ListNode* cur = head;
//	while (l1&&l2) {
//		if (l1->val<l2->val) {
//			cur->next = l1;
//			l1 = l1->next;
//		}
//		else {
//			cur->next = l2;
//			l2 = l2->next;
//		}
//		cur = cur->next;
//	}
//	//记得把剩下的元素链接上
//	cur->next = (l1>l2) ? l1 : l2;
//	cur = head;
//	head = head->next;
//	delete(cur);
//	return head;
//}
////递归
//ListNode* RecursivemergeTwoLists(ListNode* l1, ListNode* l2) {
//	if (l1 == NULL) {
//		return l2;
//	}
//	if (l2 == NULL) {
//		return l1;
//	}
//	if (l1->val<l2->val) {
//		l1->next = mergeTwoLists(l1->next, l2);
//		return l1;
//	}
//	else {
//		l2->next = mergeTwoLists(l1, l2->next);
//		return l2;
//	}
//}
////**merge k sorted linked lists
//ListNode* BrutemergeKLists(vector<ListNode*>& lists) {
//	//1. Brute Force：遍历所有链表取出元素排序，加入到新链表
//	vector<int> ele;
//	int num = lists.size();
//	for (int i = 0; i<num; i++) {
//		while (lists[i]) {
//			ele.push_back(lists[i]->val);
//			lists[i] = lists[i]->next;
//		}
//	}
//	sort(ele.begin(), ele.end());
//	ListNode *head = new ListNode(0), *cur = head;
//	num = ele.size();
//	for (int i = 0; i<num; i++) {
//		cur->next = new ListNode(ele[i]);
//		cur = cur->next;
//	}
//	cur = head;
//	head = head->next;
//	delete(cur);
//	return head;
//}
//ListNode* mergeKLists(vector<ListNode*>& lists) {
//	//2. Divide and conquer
//	int listnum = lists.size(), mid;
//	if (!listnum)
//		return NULL;
//	while (listnum>1) {
//		mid = (listnum) / 2;
//		//lists[mid]在偶数个时会和lists[mid-1]合并
//		//奇数个时不能合并，否则合并lists[mid]与lists[mid]会出错死循环等
//		for (int i = 0; i<mid; i++) {
//			lists[i] = mergeTwoLists(lists[i], lists[listnum - 1 - i]);
//		}
//		listnum = (listnum + 1) / 2;
//	}
//	return lists[0];
//}
//
////Reverse linked lists
//ListNode* iterreverseList(ListNode* head) {
//	//1.迭代
//	ListNode*pre = NULL, *cur = head, *temp;
//	while (cur) {
//		temp = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = temp;
//	}
//	return pre;
//}
//ListNode* reverseList(ListNode* head) {
//	//2.递归，假设head之后的结点都已经反转了
//	if (!head || !head->next) {
//		return head;
//	}
//	ListNode* next = reverseList(head->next);
//	head->next->next = head;
//	//一定不能忘记改掉原来第一个的next为NULL，不然会产生一个循环
//	head->next = NULL;
//	return next;
//}
//
////Reverse a linked list from position m to n. Do it in one-pass.
//ListNode* cleanreverseBetween(ListNode* head, int m, int n) {
//	//#1：4 pointers clean solution
//	//Never forget this!
//	if (!head)return head;
//	//create a dummy node to mark the head of this list
//	ListNode *dummy = new ListNode(0);
//	dummy->next = head;
//	ListNode *pre = dummy;
//	//find the node before the 1st node to reverse
//	for (int i = 1; i<m; i++) { pre = pre->next; }
//	ListNode *cur = pre->next;
//	ListNode *last = cur->next;
//	//for each cycle, put a node(m+1~n) at the head of sublist 
//	for (int i = 0; i<n - m; i++) {
//		cur->next = last->next;
//		last->next = pre->next;
//		pre->next = last;
//		last = cur->next;
//	}
//	head = dummy->next;
//	delete(dummy);
//	return head;
//}
////Rverse the first N nodes of a linked list
//ListNode *Nplus1 = NULL;
//ListNode* reverseN(ListNode* head, int n) {
//	ListNode *last;
//	if (n == 1) { //now head points to the Nth node
//		Nplus1 = head->next;
//		return head;
//	}
//	last = reverseN(head->next, n - 1);
//	head->next->next = head;
//	//link head to the N+1 node
//	head->next = Nplus1;
//	return last;
//}
//ListNode* reverseBetween(ListNode* head, int m, int n) {
//	//base case: reverse the first n nodes
//	if (m == 1) {
//		return reverseN(head, n);
//	}
//	head->next = reverseBetween(head->next, m - 1, n - 1);
//	return head;
//}
////Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
//ListNode* reverseKGroup(ListNode* head, int k) {
//	//Base case:less than k nodes
//	ListNode *last = head;
//	for (int i = 1; i<k; i++) {
//		if (!last) {
//			return head;
//		}
//		else {
//			last = last->next;
//		}
//	}
//	if (!last)return head;
//
//	ListNode *next = last->next;
//	last->next = reverseKGroup(next, k);
//	return cleanreverseBetween(head, 1,k);
//}
//int main() {
//	int array[] = { 1,2,3,4,5 };
//	ListNode* head = create(array, 5);
//	ListNode* rlt = reverseKGroup(head, 2);
//	show(rlt);
//	return 0;
//}
//
//
