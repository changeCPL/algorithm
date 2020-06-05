//////只使用Dijkstra
////#include<cstdio>
////#include<cstring>
////#include<algorithm>
////using namespace std;
////const int MAX = 510;
////const int INF = 0x3fffffff;
////int n,m,st,ed,G[MAX][MAX],cost[MAX][MAX]; //顶点数，边数，始末顶点，图的邻接矩阵(边权距离)以及边权花费
////int d[MAX], c[MAX], pre[MAX]; //最短距离，最小花费，路径前驱结点
////bool vis[MAX] = {false};//是否访问
////
//////以s为起点求解到每一个顶点的最短距离，花费，路径
////void Dijkstra(int s) {
////	//初始化
////	fill(d, d + MAX, INF);
////	fill(c, c + MAX, INF);
////	for (int i = 0; i < MAX; i++)pre[i] = i;
////	//起点到自身
////	d[s] = 0; c[s] = 0;
////	for (int i = 0; i < n; i++) { //遍历n次(顶点数)
////		//在未访问顶点中找离起点最近的
////		int u = -1, MIN = INF;
////		for (int j = 0; j < n; j++) {
////			if (!vis[j] && d[j] < MIN) {
////				u = j;
////				MIN = d[j];
////			}
////		}
////		if (u == -1)return; //说明剩下的顶点与起始点s不连通
////		vis[u] = true; //标记u被访问
////		//如果以u为中介到 u能到达的 未被访问的结点 的距离更短，则更新
////		for (int j = 0; j < n; j++) {
////			if (!vis[j] && G[u][j] != INF) {
////				if (d[u] + G[u][j] < d[j]) { //路径更短
////					d[j] = d[u] + G[u][j];
////					c[j] = c[u] + cost[u][j];
////					pre[j] = u;
////				}
////				else if (d[u] + G[u][j] == d[j]) { //路径长度一样
////					if (c[u] + cost[u][j] < c[j]) { //判断花费是否更少
////						c[j] = c[u] + cost[u][j];
////						pre[j] = u;
////					}
////				}
////			}
////		}
////	}
////}
////
//////dfs打印路径
////void dfs(int cur) {
////	if (cur == st) { //到达起始顶点，递归边界
////		printf("%d ", cur);
////		return;
////	}
////	dfs(pre[cur]);
////	printf("%d ", cur);
////	return;
////}
////
////int main() {
////	//二维数组的初始化
////	fill(G[0], G[0] + MAX*MAX, INF);//初始化图
////	scanf("%d %d %d %d", &n, &m, &st, &ed);
////	int x, y;
////	for (int i = 0; i < m; i++) {
////		scanf("%d %d", &x, &y);
////		scanf("%d %d", &G[x][y], &cost[x][y]);
////		//无向图记得复制边权
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
////先求出所有最短路径，再求最小花费
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int MAX = 510;
//const int INF = 0x3fffffff;
//int n,m,st,ed,G[MAX][MAX],cost[MAX][MAX]; //顶点数，边数，始末顶点，图的邻接矩阵(边权距离)以及边权花费
//int d[MAX],mincost=INF; //最短距离
//bool vis[MAX] = {false};//是否访问
//vector<int> pre[MAX]; //前驱
//vector<int> path, temp; //最优路径和临时路径
//
//void Dijkstra(int s) {
//	//初始化
//	fill(d, d + MAX, INF);
//	//起点到自身
//	d[s] = 0;
//	for (int i = 0; i < n; i++) { //遍历n次(顶点数)
//		//在未访问顶点中找离起点最近的
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1)return; //说明剩下的顶点与起始点s不连通
//		vis[u] = true; //标记u被访问
//		//如果以u为中介到 u能到达的 未被访问的结点 的距离更短，则更新
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && G[u][j] != INF) {
//				if (d[u] + G[u][j] < d[j]) { //路径更短
//					d[j] = d[u] + G[u][j];
//					pre[j].clear(); //找到更短，清除旧的
//					pre[j].push_back(u);
//				}
//				else if (d[u] + G[u][j] == d[j]) { //路径长度一样
//					pre[j].push_back(u);
//				}
//			}
//		}
//	}
//}
////画图有助于理解
//void DFS(int cur) {
//	if (cur == st) { //递归边界
//		temp.push_back(cur); //当前结点加入路径
//		//计算当前路径花费
//		int curcost = 0;
//		//倒着访问，注意边的数量比路径上顶点数少1
//		for (int i = temp.size() - 1; i > 0; i--) {
//			curcost += cost[temp[i]][temp[i - 1]];
//		}
//		if (curcost < mincost) {
//			path = temp;
//			mincost = curcost;
//			temp.pop_back(); //记得删除刚加入的结点,否则下次直接到达边界
//		}
//		return;
//	}
//	//未到达边界，加入当前路径，递归访问前驱点集
//	temp.push_back(cur);
//	for (int i = 0; i < pre[cur].size(); i++) {
//		DFS(pre[cur][i]);
//	}
//	//遍历完当前结点所有前驱结点，则删除当前结点
//	temp.pop_back();
//	return;
//}
//
//int main() {
//	//二维数组的初始化
//	fill(G[0], G[0] + MAX*MAX, INF);//初始化图
//	scanf("%d %d %d %d", &n, &m, &st, &ed);
//	int x, y;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &x, &y);
//		scanf("%d %d", &G[x][y], &cost[x][y]);
//		//无向图记得复制边权
//		G[y][x] = G[x][y];
//		cost[y][x] = cost[x][y];
//	}
//	Dijkstra(st);
//	DFS(ed);
//	//逆序输出最优路径
//	for (int i = path.size() - 1; i >= 0; i--) {
//		printf("%d ", path[i]);
//	}
//	printf("%d %d\n", d[ed], mincost);
//	return 0;
//}
