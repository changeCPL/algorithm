//////ֻʹ��Dijkstra
////#include<cstdio>
////#include<cstring>
////#include<algorithm>
////using namespace std;
////const int MAX = 510;
////const int INF = 0x3fffffff;
////int n,m,st,ed,G[MAX][MAX],cost[MAX][MAX]; //��������������ʼĩ���㣬ͼ���ڽӾ���(��Ȩ����)�Լ���Ȩ����
////int d[MAX], c[MAX], pre[MAX]; //��̾��룬��С���ѣ�·��ǰ�����
////bool vis[MAX] = {false};//�Ƿ����
////
//////��sΪ�����⵽ÿһ���������̾��룬���ѣ�·��
////void Dijkstra(int s) {
////	//��ʼ��
////	fill(d, d + MAX, INF);
////	fill(c, c + MAX, INF);
////	for (int i = 0; i < MAX; i++)pre[i] = i;
////	//��㵽����
////	d[s] = 0; c[s] = 0;
////	for (int i = 0; i < n; i++) { //����n��(������)
////		//��δ���ʶ�����������������
////		int u = -1, MIN = INF;
////		for (int j = 0; j < n; j++) {
////			if (!vis[j] && d[j] < MIN) {
////				u = j;
////				MIN = d[j];
////			}
////		}
////		if (u == -1)return; //˵��ʣ�µĶ�������ʼ��s����ͨ
////		vis[u] = true; //���u������
////		//�����uΪ�н鵽 u�ܵ���� δ�����ʵĽ�� �ľ�����̣������
////		for (int j = 0; j < n; j++) {
////			if (!vis[j] && G[u][j] != INF) {
////				if (d[u] + G[u][j] < d[j]) { //·������
////					d[j] = d[u] + G[u][j];
////					c[j] = c[u] + cost[u][j];
////					pre[j] = u;
////				}
////				else if (d[u] + G[u][j] == d[j]) { //·������һ��
////					if (c[u] + cost[u][j] < c[j]) { //�жϻ����Ƿ����
////						c[j] = c[u] + cost[u][j];
////						pre[j] = u;
////					}
////				}
////			}
////		}
////	}
////}
////
//////dfs��ӡ·��
////void dfs(int cur) {
////	if (cur == st) { //������ʼ���㣬�ݹ�߽�
////		printf("%d ", cur);
////		return;
////	}
////	dfs(pre[cur]);
////	printf("%d ", cur);
////	return;
////}
////
////int main() {
////	//��ά����ĳ�ʼ��
////	fill(G[0], G[0] + MAX*MAX, INF);//��ʼ��ͼ
////	scanf("%d %d %d %d", &n, &m, &st, &ed);
////	int x, y;
////	for (int i = 0; i < m; i++) {
////		scanf("%d %d", &x, &y);
////		scanf("%d %d", &G[x][y], &cost[x][y]);
////		//����ͼ�ǵø��Ʊ�Ȩ
////		G[y][x] = G[x][y];
////		cost[y][x] = cost[x][y];
////	}
////	Dijkstra(st);
////	dfs(ed);
////	printf("%d %d\n", d[ed], c[ed]);
////	return 0;
////}
//
////Dijkstra+DFS
////������������·����������С����
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int MAX = 510;
//const int INF = 0x3fffffff;
//int n,m,st,ed,G[MAX][MAX],cost[MAX][MAX]; //��������������ʼĩ���㣬ͼ���ڽӾ���(��Ȩ����)�Լ���Ȩ����
//int d[MAX],mincost=INF; //��̾���
//bool vis[MAX] = {false};//�Ƿ����
//vector<int> pre[MAX]; //ǰ��
//vector<int> path, temp; //����·������ʱ·��
//
//void Dijkstra(int s) {
//	//��ʼ��
//	fill(d, d + MAX, INF);
//	//��㵽����
//	d[s] = 0;
//	for (int i = 0; i < n; i++) { //����n��(������)
//		//��δ���ʶ�����������������
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1)return; //˵��ʣ�µĶ�������ʼ��s����ͨ
//		vis[u] = true; //���u������
//		//�����uΪ�н鵽 u�ܵ���� δ�����ʵĽ�� �ľ�����̣������
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && G[u][j] != INF) {
//				if (d[u] + G[u][j] < d[j]) { //·������
//					d[j] = d[u] + G[u][j];
//					pre[j].clear(); //�ҵ����̣�����ɵ�
//					pre[j].push_back(u);
//				}
//				else if (d[u] + G[u][j] == d[j]) { //·������һ��
//					pre[j].push_back(u);
//				}
//			}
//		}
//	}
//}
////��ͼ���������
//void DFS(int cur) {
//	if (cur == st) { //�ݹ�߽�
//		temp.push_back(cur); //��ǰ������·��
//		//���㵱ǰ·������
//		int curcost = 0;
//		//���ŷ��ʣ�ע��ߵ�������·���϶�������1
//		for (int i = temp.size() - 1; i > 0; i--) {
//			curcost += cost[temp[i]][temp[i - 1]];
//		}
//		if (curcost < mincost) {
//			path = temp;
//			mincost = curcost;
//			temp.pop_back(); //�ǵ�ɾ���ռ���Ľ��,�����´�ֱ�ӵ���߽�
//		}
//		return;
//	}
//	//δ����߽磬���뵱ǰ·�����ݹ����ǰ���㼯
//	temp.push_back(cur);
//	for (int i = 0; i < pre[cur].size(); i++) {
//		DFS(pre[cur][i]);
//	}
//	//�����굱ǰ�������ǰ����㣬��ɾ����ǰ���
//	temp.pop_back();
//	return;
//}
//
//int main() {
//	//��ά����ĳ�ʼ��
//	fill(G[0], G[0] + MAX*MAX, INF);//��ʼ��ͼ
//	scanf("%d %d %d %d", &n, &m, &st, &ed);
//	int x, y;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &x, &y);
//		scanf("%d %d", &G[x][y], &cost[x][y]);
//		//����ͼ�ǵø��Ʊ�Ȩ
//		G[y][x] = G[x][y];
//		cost[y][x] = cost[x][y];
//	}
//	Dijkstra(st);
//	DFS(ed);
//	//�����������·��
//	for (int i = path.size() - 1; i >= 0; i--) {
//		printf("%d ", path[i]);
//	}
//	printf("%d %d\n", d[ed], mincost);
//	return 0;
//}
