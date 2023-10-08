#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> v1(n);
	vector<int> v2(m);
	for (int i = 0; i < n; ++i) {
		cin >> v1[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> v2[i];
	}
	for (int i = 0; i < v2.size(); ++i) {
		v1.push_back(v2[i]);
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " ";
	}
}