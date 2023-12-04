#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<bool> v(n+1, true);
	vector<int> cnt;
	for (int i = 2; i * i <= n; i++) {
		if (v[i]) {
			for (int k = i * i; k <= n; k += i) {
				v[k] = false;
			}
		}
	}
	while (n != 1) {
		for (int i = 2; i <= n; ++i) {
			if (v[i] && n % i == 0) {
				n /= i;
				cnt.push_back(i);
				break;
			}
		} 
	}
	if (!cnt.empty()) {
		for (int i = 0; i < cnt.size(); ++i) {
			cout << cnt[i] << '\n';
		}
	}
	return 0;
}