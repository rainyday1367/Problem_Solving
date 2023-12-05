#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<bool> v(m + 1, false);
	for (int i = 2; i * i <= m; i++) {
		if (v[i]) continue;
		else{
			for (int k = i * i; k <= m; k += i) {
				v[k] = 1;
			}
		}
	}
	for (int i = n; i <= m; ++i) {
		if (!v[i]) {
			if (i == 1) continue;
			cout << i << '\n';
		}
	}
}