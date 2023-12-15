#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int sum{};
	for (int i = 0; i < 5; ++i) {
		int score;
		cin >> score;
		if (score < 40) {
			sum += 40;
		}
		else {
			sum += score;
		}
	}
	cout << sum / 5;
	return 0;
}