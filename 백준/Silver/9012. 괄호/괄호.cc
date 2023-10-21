#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int N; cin >> N;
	while (N--) {
		string s; cin >> s;
		stack<char> S;
		bool flag = 0; //error flag
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') S.push('(');
			else {
				if (S.empty()) flag = 1;
				else S.pop();
			}
		}
		if (S.size()) flag = 1;
		cout << (flag ? "NO" : "YES") << '\n';
	}
}