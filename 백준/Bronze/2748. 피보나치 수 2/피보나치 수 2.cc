#include <iostream>
using namespace std;
long long f[91];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	f[0] = 0; f[1] = 1;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		f[i + 2] = f[i + 1] + f[i];
	}
	cout << f[n];
}