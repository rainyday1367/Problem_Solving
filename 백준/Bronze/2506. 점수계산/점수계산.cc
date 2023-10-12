#include<bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> ori;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		ori.push_back(a);
	}
	int idx = 0;
	vector<int> elm(n);
	for (int j = 0; j < n - 1; ++j) {
		if (ori[j] == 1 && ori[j + 1] == 1) {
			idx++;
			elm[j + 1] = idx;
		}
		else {
			idx = 0;
		}
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		ori[i] = ori[i] + elm[i];
		sum += ori[i];
	}
	cout << sum << '\n';
}