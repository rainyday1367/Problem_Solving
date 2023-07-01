#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s;
	getline(cin, s);
	int cnt = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') cnt++;
	}
	if (s[0] == ' ') cnt--;
	if (s[s.length() - 1] == ' ') cnt--;
	cout << cnt << '\n';
}