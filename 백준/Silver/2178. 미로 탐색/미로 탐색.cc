#include <iostream>
#include <queue>

using namespace std;
int dist[102][102];
int visited[102][102] = { 0, };
int fin[102][102];
int x_dir[4] = { 1,0,-1,0 };
int y_dir[4] = { 0,1,0,-1 };
queue<pair<int, int>> q;
int n, m;
void bfs(int x, int y) {
	visited[x][y] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for (int i = 0; i < 4; ++i) {
			int dx = cur.first + x_dir[i];
			int dy = cur.second + y_dir[i];
			//조건이 필요 dx,dy가 1인지 기존 배열인지, 범위 내에 있는지, 0~n 0~m인지
			if (dx < 0 && dy < 0 && dx >= n && dy >= m) continue;
			if (dist[dx][dy] == 0) continue;
			if (visited[dx][dy] != 0) continue;
			visited[dx][dy] = visited[cur.first][cur.second] + 1;
			q.push({ dx,dy });
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	string board;
	for (int i = 0; i < n; ++i) {
		cin >> board;
		for (int j = 0; j < m; ++j) {
			dist[i][j] = board[j] - '0';
		}
		board = "";
	}
	bfs(0, 0);
	cout << visited[n - 1][m - 1]<< '\n';
}