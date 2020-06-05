//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 505    //没看清范围写成55，导致几次运行时数组越界
//struct STATION
//{
//	double price;
//	double dis;
//	double gas_dis;
//}station[MAX];
//bool cmp(STATION A, STATION B) {
//	if (A.dis != B.dis)
//		return A.dis < B.dis;
//	else
//		return A.price < B.price;
//}
//
//int main() {
//	double gasmax, distance, davg;
//	int n;
//	while (scanf("%lf %lf %lf %d", &gasmax, &distance, &davg, &n) != EOF) {
//		double maxdis = gasmax*davg, dissum = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%lf %lf", &station[i].price, &station[i].dis);
//			station[i].gas_dis = 0;
//		}
//		sort(station, station + n, cmp);
//		if (station[0].dis != 0) {
//			printf("The maximum travel distance = 0.00\n");
//			continue;
//		}
//		bool flag = 1;
//		//for (int j = 1; j < n; j++) {      //一元钱买来的教训：当n=1且不能到达时，这个判断逻辑失效
//		for (int j = 0; j<n; j++) {
//			if (j == n - 1) {   //先判断是不是最后一个加油站
//				if (distance > station[j].dis + maxdis) {
//					dissum = station[j].dis + maxdis;
//					flag = 0;
//					printf("The maximum travel distance = %.2f\n", dissum);
//				}
//			}
//			else if(station[j+1].dis - station[j].dis>maxdis) {
//				dissum = station[j].dis + maxdis;
//				flag = 0;
//				printf("The maximum travel distance = %.2f\n", dissum);
//				break;
//			}
//		}
//		if (!flag)
//			continue;
//		else{
//			double cur_gas = 0,touch;
//			int cheapst;
//			for (int cur = 0; cur < n;) {
//				cheapst = cur;
//				touch = station[cur].dis + maxdis;
//				int i;
//				
//				for (i = cur + 1; i < n && station[i].dis <= touch; i++) {
//					if (station[i].dis >= distance)
//						break;
//					if (station[i].price <= station[cur].price) {  //找到更便宜的，则去该地加油
//						cheapst = i;
//						break;
//					}
//				}
//				if(cheapst!=cur){
//					double s=station[cheapst].dis - station[cur].dis;
//					station[cur].gas_dis = (cur_gas >= s) ? 0 : (s-cur_gas);
//					cur_gas = (cur_gas >= s) ? (cur_gas - s) : 0;
//					cur = cheapst;
//				}
//				else {
//					if (touch >= distance) {
//						station[cur].gas_dis =distance- station[cur].dis-cur_gas;
//						break;
//					}
//					else {   //当前加油站范围内找不到更便宜的加油站，且当前车站不能直接开到目的地。则加满且开到范围内油价最低的
//						int second = cur + 1;
//						for (int k = cur + 2; k < n&&station[k].dis <= touch; k++) {
//							if (station[k].price <= station[second].price)
//								second = k;
//						}
//						station[cur].gas_dis =maxdis-cur_gas;  //加满
//						cur_gas = maxdis-(station[second].dis-station[cur].dis);
//						cur = second;
//					}
//				}
//			}
//			double fee = 0;
//			for (int i = 0; i < n; i++) {
//				if (station[i].dis >= distance)
//					break;
//				if(station[i].gas_dis>0)
//					fee += station[i].gas_dis / davg*station[i].price;
//			}
//			printf("%.2f\n", fee);
//		}
//	}
//	return 0;
//}