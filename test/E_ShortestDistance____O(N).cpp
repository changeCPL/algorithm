////Problem: given N exits on a highway which forms a simple cycle, 
////you are supposed to tell the shortest distance between any pair of exits.
////第一遍解法：记下每个距离，每次读入一对序号，选定步骤少的方向，累加.这样时间复杂度还是O(n^2)
//#include<stdio.h>
//int curdissum[100001];  //！！！存储当前节点到第一个节点的距离，用差值求两节点距离
//int main() {
//	int exits_num,case_num, dis_sum=0,input_dis=0;
//	long long ans;
//	scanf("%d", &exits_num);
//	int i;
//	for (i = 0; i < exits_num; i++) {
//		scanf("%d", &input_dis);
//		curdissum[i] = dis_sum;
//		dis_sum += input_dis;
//	}
//	scanf("%d", &case_num);
//	int exit1, exit2,temp;
//	while (case_num--) {
//		ans = 0;
//		temp = 0;
//		scanf("%d %d", &exit1, &exit2);
//		exit1--;
//		exit2--;
//		ans = (exit1 > exit2) ? (curdissum[exit1] - curdissum[exit2]) : (curdissum[exit2] - curdissum[exit1]);
//		temp = dis_sum - ans;
//		if (temp < ans)ans = temp;
//		//第一遍解法错误//今天(19.12.30)第二次犯这个错：切记须拿更新前的值判断！！！
//		printf("%lld\n", ans);
//	}
//	return 0;
//}