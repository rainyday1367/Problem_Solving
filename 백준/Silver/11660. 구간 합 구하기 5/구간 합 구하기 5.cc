#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>> d(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			d[i][j] = d[i][j - 1] + d[i - 1][j] - d[i - 1][j - 1] + arr[i][j];
		}
	}
	for (int i = 0; i < m; ++i) {
		int result{};
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		result = d[x2][y2] - d[x1 - 1][y2] - d[x2][y1 - 1] + d[x1 - 1][y1 - 1];
		cout << result << '\n';
	}
}