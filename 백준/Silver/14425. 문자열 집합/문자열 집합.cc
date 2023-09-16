#include<iostream>
#include<algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<string> m;
	int n,p;
	cin >> n >> p;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		m.insert(s);
	}
	int cnt = 0;
	for (int i = 0; i < p; ++i) {
		string s1;
		cin >> s1;
		if (m.find(s1) != m.end()) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}