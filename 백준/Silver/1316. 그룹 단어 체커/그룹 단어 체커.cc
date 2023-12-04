#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	int cnt{};
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		bool alpha[26] = { 0, };
		alpha[s[0] - 'a'] = 1;
		for (int i = 1; i < s.length(); ++i) {
			if (s[i - 1] == s[i]) continue;
			else if (s[i - 1] != s[i] && alpha[s[i] - 'a'] == 1) {
				cnt++;
				break;
			}
			else {
				alpha[s[i] - 'a'] = 1;
			}
		}
	}
	cout << n - cnt << '\n';
	return 0;
}