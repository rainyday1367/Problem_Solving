#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, v;
vector<int> adj[10001];
bool isvalid[10001];
void bfs() {
	queue<int> q;
	q.push(v);
	while (!q.empty()) {
		int nxt = q.front(); q.pop();
		cout << nxt << " ";
		isvalid[nxt] = 1;
		for (auto cur : adj[nxt]) {
			if (isvalid[cur]) continue;
			q.push(cur);
			isvalid[cur] = 1;
		}
	}
}
void dfs(int cur) {
	isvalid[cur] = 1;
	cout << cur << " ";
	for (auto nxt : adj[cur]) {
		if (isvalid[nxt]) continue;
		dfs(nxt);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m >> v;
	while (m--) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 1; i <= n; ++i) {
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(v);
	cout << '\n';
	fill(isvalid, isvalid + 1001, false);
	bfs();
	return 0;
}