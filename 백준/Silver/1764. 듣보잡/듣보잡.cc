#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int cnt{};
	vector<string> v;
	set<string> s;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		s.insert(str);
	}
	for (int i = 0; i < m; ++i) {
		string str;
		cin >> str;
		if (s.find(str) != s.end()) {
			cnt++;
			v.push_back(str);
		}
	}
	cout << cnt << '\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << '\n';
	}
    return 0;
}