#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pair<int, int> p[50];
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p[i].first >> p[i].second;
	}
	for (int i = 0; i < n; ++i) {
		int rnk = 1;
		for (int j = 0; j < n; ++j) {
			if (p[i].first < p[j].first && p[i].second < p[j].second) {
				rnk++;
			}
		}
		cout << rnk << " ";
	}
	return 0;
}