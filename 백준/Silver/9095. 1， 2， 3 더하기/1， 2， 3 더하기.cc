#include <bits/stdc++.h>
using namespace std;
int dp[15];
int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 4; i <= n; ++i) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[n] << '\n';
	}
	return 0;
}