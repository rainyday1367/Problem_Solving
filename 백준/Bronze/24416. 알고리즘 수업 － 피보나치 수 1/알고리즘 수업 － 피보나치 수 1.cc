#include <bits/stdc++.h>
using namespace std;

unsigned long dp[41];
int cnt, dp_cnt;
unsigned long fibo(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return fibo(n - 1) + fibo(n - 2);
}
void dp_fibo(int n) {
	dp[1] = 1;
	dp[2] = 1;
	if (n == 1 || n == 2) {
		cout << 1 << '\n';
	}
	for (int i = 3; i <= n; ++i) {
		dp_cnt++;
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	unsigned long result = fibo(n);
	dp_fibo(n);
	cout << result << " " << dp_cnt << '\n';
}