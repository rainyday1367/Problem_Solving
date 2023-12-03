#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int num[10001];
vector<int> v;
int res;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 2; i <= m; ++i) { //에라토스테네스의 체
		num[i] = i;
	}
	for (int i = 2; i <= sqrt(m); ++i) {
		if (num[i] == 0) continue;
		for (int j = i * i; j <= m; j += i) {
			num[j] = 0;
		}
	}
	for (int i = n; i <= m; ++i) {
		if (num[i] != 0) v.push_back(num[i]);
	}
	if (v.empty()) cout << -1;
	else {
		for (int i = 0; i < v.size(); ++i) {
			res += v[i];
		}
		sort(v.begin(), v.end());
		cout << res << " " << v[0];
	}
	return 0;
}