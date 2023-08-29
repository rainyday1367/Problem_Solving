#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; int sum = 0;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		sum += b % a;
	}
	cout << sum << '\n';
}