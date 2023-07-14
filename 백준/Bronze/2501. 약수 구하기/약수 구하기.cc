#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector <int> arr;
	int count = 0;
	for (int i = 1; i < n+1; ++i) {
		if (n % i == 0) {
			arr.push_back(i);
			count++;
		}
	}
	if (count < k)
		cout << 0;
	else
		cout << arr[k - 1];
	return 0;
}