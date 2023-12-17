#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int train{}; int mx{};
	for (int i = 0; i < 4; ++i) {
		int o, p;
		cin >> o >> p;
		train -= o;
		train += p;
		mx = max(mx, train);
	}
	cout << mx << '\n';
	return 0;
}