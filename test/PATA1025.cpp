//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//typedef struct {
//	char id[15];
//	int score;
//	int loc;
//	int localrank;
//}STU;
//STU stu[30005];
//bool cmp(STU a, STU b) {
//	if (a.score != b.score)
//		return (a.score>b.score);
//	else
//		return (strcmp(a.id, b.id) < 0);
//}
//int main() {
//	int N,locnum=0,num=0;
//	scanf("%d", &N);
//	while (N--) {
//		locnum++;
//		int k;
//		scanf("%d", &k);
//		for (int i = 0; i < k; i++) {
//			scanf("%s %d", stu[num].id, &stu[num].score);
//			stu[num].loc = locnum;
//			num++;
//		}
//		sort(stu+num-k, stu + num, cmp);
//		stu[num-k].localrank = 1;
//		for (int i = num-k+1; i < num; i++) {
//			if (stu[i].score == stu[i - 1].score)
//				stu[i].localrank = stu[i - 1].localrank;
//			else
//				stu[i].localrank = i + 1 - (num - k);
//		}
//	}
//	sort(stu, stu + num, cmp);
//	printf("%d\n", num);
//	int rank = 1;
//	printf("%s %d %d %d\n", stu[0].id, rank, stu[0].loc, stu[0].localrank);
//	for (int i = 1; i < num; i++) {
//		if (stu[i].score != stu[i - 1].score)
//			rank = i + 1;
//		printf("%s %d %d %d\n", stu[i].id, rank, stu[i].loc, stu[i].localrank);
//	}
//	return 0;
//}