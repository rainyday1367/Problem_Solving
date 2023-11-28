#include <bits/stdc++.h>
using namespace std;

int d[11];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> d[i];
	}
	int cnt{};
	for (int i = n - 1; i >= 0; --i) {
		cnt += k / d[i];
		k %= d[i];
	}
	cout << cnt;
	return 0;
}