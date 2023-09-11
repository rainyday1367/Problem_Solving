#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int dice1, dice2;
		cin >> dice1 >> dice2;
		cout << "Case " << i + 1 << ":" << " " << dice1 + dice2 << '\n';
	}
	return 0;
}