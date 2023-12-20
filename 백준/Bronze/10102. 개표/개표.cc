#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; ++i) {
		char c;
		cin >> c;
		s += c;
	}
	int a = 0; int b = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'A') a++;
		else b++;
	}
	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else cout << "Tie";
	return 0;
}