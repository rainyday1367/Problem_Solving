#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a * b * c;
	string s = to_string(sum);
	int cnt[10] = { 0, };
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			cnt[0] += 1;
		}
		if (s[i] == '1') {
			cnt[1] += 1;
		}
		if (s[i] == '2') {
			cnt[2] += 1;
		}
		if (s[i] == '3') {
			cnt[3] += 1;
		}
		if (s[i] == '4') {
			cnt[4] += 1;
		}
		if (s[i] == '5') {
			cnt[5] += 1;
		}
		if (s[i] == '6') {
			cnt[6] += 1;
		}
		if (s[i] == '7') {
			cnt[7] += 1;
		}
		if (s[i] == '8') {
			cnt[8] += 1;
		}
		if (s[i] == '9') {
			cnt[9] += 1;
		}
	}
	for (int j = 0; j < 10; ++j)
		cout << cnt[j] << '\n';
}