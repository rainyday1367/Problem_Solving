#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a, b, c; cin >> a >> b >> c;
	string s = to_string(a * b * c);
	vector<int> cnt(10);
	for (int i = 0; i < s.size(); i++) cnt[s[i] - '0']++;
	for (int i = 0; i < 10; i++) cout << cnt[i] << '\n';
}