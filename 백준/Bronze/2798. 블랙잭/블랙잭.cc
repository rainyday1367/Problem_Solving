#include <iostream>
#include <cmath>
using namespace std;
int arr[101];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int mx{};
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if (arr[i] + arr[j] + arr[k] <= m) {
					mx = max(mx, arr[i] + arr[j] + arr[k]);
				}
			}
		}
	}
	cout << mx;
	return 0;
}