//////N�ʺ󣬲���ͬһ�У��жԽ��ߡ��ݹ��㷨��n>10ʱ�Ϳ�ʼ���ܲ�ס��
////#include<iostream>
////#include<algorithm>
////#include<cstring>
////using namespace std;
////#define MAX 10005
////int num, n,P[MAX],hastab[MAX];
////void generateP(int index) {  //Ϊ��index�еĻʺ�ѡ����λ��
////	if (index == n + 1) {	//�ݹ�߽磬����һ���Ϸ�����
////		num++;
////		return;
////	}
////	for (int i = 1; i <= n; i++) {
////		if (hastab[i] == 0) {  //��i�л�û�лʺ�
////			bool flag = true;  //����λ���Ƿ���ǰ��Ļʺ��ͻ
////			for (int j = 1; j < index; j++) {
////				if (abs(index - j) == abs(i - P[j])) {
////					flag = false;
////					break;
////				}
////			}
////			if (flag) {  //���Է��ڵ�i��
////				P[index] = i;
////				hastab[i] = 1;
////				generateP(index + 1);
////				hastab[i] = 0;
////			}
////		}
////	}
////	return;
////}
////int main() {
////	while (cin >> n) {
////		num = 0;
////		memset(hastab, 0, sizeof(hastab));
////		memset(P, 0, sizeof(P));
////		generateP(1);
////		cout << "n=" << n << ",ans=" << num << endl;
////	}
////	return 0;
////}
//
//
////λ����汾
//#include<iostream>
//using namespace std;
//int N;  //�ʺ���������ܳ���int��ʾ��Χ
//int limit; //!!!�г�ͻ���ޣ�����ȫ1,����ĩβNλȫ1
//int ans = 0;  //������
//int depth = 0;
//void generateP(int row, int md, int sd) {  //���������Ķ����ƣ�Ϊ1��λ�ֱ����ǰ��ᷢ���г�ͻ�����Խǣ����Խǳ�ͻ
//	if (row != limit) {   //˵��û����
//		int pos = limit & ~(row | md | sd);//!!!��ǰ��ɷŵ�λ��(Ϊ1��λ�ɷ�),������limit�룬��Ϊint�Ĳ��ָ�λ����N<32����ʹ��
//		//printf("~(row | md | sd):%d,pos:%d\n",~(row | md | sd), pos);
//		while (pos!=0){  //ö�����пɷŵ�λ�ü��
//			int p = pos&(-pos);  //���ұ߿ɷ�λ�õĶ�����
//			pos ^= p;  //��pos�еĸ�λ�÷���
//			//row | p,��һ���г�ͻ
//			//(md | p) >> 1; ��һ�����Խ��߳�ͻ
//			//(sd | p) << 1; ��һ�㸱�Խ��߳�ͻ
//			generateP(row | p, (md | p) >> 1, (sd | p) << 1); //��������ֱ���޸�row,md,ld��whileѭ��������ͬһ�㣬���߶�����
//		}
//	}
//	else
//		ans++;
//	return;
//}
//int main() {
//	while (cin >> N) {
//		limit = (1 << N) - 1;
//		//printf("limit:%o\n", limit);
//		ans = 0;
//		depth = 0;
//		generateP(0, 0, 0);
//		printf("%d queens solutions:%d\n",N,ans);
//	}
//	return 0;
//}