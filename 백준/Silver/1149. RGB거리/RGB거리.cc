#include <iostream>
#include <algorithm>
using namespace std;

int r[1001],g[1001],b[1001];
int dp[1001][3];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> r[i] >> g[i] >> b[i];
	}
	dp[1][0] = r[1];
	dp[1][1] = g[1];
	dp[1][2] = b[1];
	for (int i = 2; i <= n; ++i) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + r[i];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + g[i];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + b[i];
	}
	cout << min({ dp[n][0], dp[n][1], dp[n][2] }) << '\n';
}