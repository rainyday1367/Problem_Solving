#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	while (n--) {
		vector<int> adj;
		for (int i = 0; i < 10; ++i) {
			int a;
			cin >> a;
			adj.push_back(a);
		}
		sort(adj.begin(), adj.end(), greater<>());
		cout << adj[2] << '\n';
		adj.clear();
	}
	return 0;
}