////Problem: given N exits on a highway which forms a simple cycle, 
////you are supposed to tell the shortest distance between any pair of exits.
////��һ��ⷨ������ÿ�����룬ÿ�ζ���һ����ţ�ѡ�������ٵķ����ۼ�.����ʱ�临�ӶȻ���O(n^2)
//#include<stdio.h>
//int curdissum[100001];  //�������洢��ǰ�ڵ㵽��һ���ڵ�ľ��룬�ò�ֵ�����ڵ����
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
//		//��һ��ⷨ����//����(19.12.30)�ڶ��η�������м����ø���ǰ��ֵ�жϣ�����
//		printf("%lld\n", ans);
//	}
//	return 0;
//}