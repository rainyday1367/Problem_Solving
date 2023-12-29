#include <iostream>
using namespace std;
int gcd(int a, int b) {
	long long int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << a * b / gcd(a, b) << '\n';
	}
	return 0;
}