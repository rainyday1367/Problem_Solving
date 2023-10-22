#include <iostream>

using namespace std;
int factorial(int n) {
	int a = 1;
	for (int i = n; i > 0; --i) {
		a *= i;
	}
	return a;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; int k;
	cin >> n >> k;
	int result = factorial(n) / (factorial(n - k) * factorial(k));
	cout << result << '\n';
}