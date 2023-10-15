#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt[10001] = {};
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		cnt[a]++;
	}
	for (int i = 0; i < 10001; ++i) {
		while (cnt[i]--) {
			cout << i << '\n';
		}
	}
}