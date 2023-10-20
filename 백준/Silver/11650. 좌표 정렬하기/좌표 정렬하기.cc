#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i].first << " " << v[i].second << '\n';
	}
}