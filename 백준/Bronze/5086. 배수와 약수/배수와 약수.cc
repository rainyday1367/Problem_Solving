#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a < b && b % a == 0) cout << "factor" << '\n';
		else if (a > b&& a% b == 0) cout << "multiple" << '\n';
		else if (a == 0 && b == 0) break;
		else cout << "neither" << '\n';
	}
	return 0;
}