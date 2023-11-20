#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	map<int, string> m1;
	map<string, int> m2;
	for (int i = 1; i <= n; ++i) {
		string s;
		cin >> s;
		m1[i] = s;
		m2[s] = i;
	}
	while (m--) {
		string s;
		cin >> s;
		if (isdigit(s[0])) cout << m1[stoi(s)] << '\n';
		else cout << m2[s] << '\n';
	}
}