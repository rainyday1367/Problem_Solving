#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj[1001];
bool vis[1005];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int graph_count = 0;
	fill(vis, vis + 1000, false);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	//bfs
	for (int i = 1; i <= n; ++i) {
		if (vis[i]) continue;
		graph_count++;
		queue<int> q;
		q.push(i);
		while (!q.empty()) {
			int cur = q.front();//앞의 것의 추출
			q.pop();//bfs와 dfs의 기본
			for (auto nxt : adj[cur]) {
				if (vis[nxt]) continue;
				q.push(nxt);
				vis[nxt] = true;
			}
		}
	}
	cout << graph_count << '\n';
}