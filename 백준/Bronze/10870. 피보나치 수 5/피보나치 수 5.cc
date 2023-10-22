#include <iostream>

using namespace std;

int fib[21] = {};
int fibonachi(int n) {
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < 21; ++i) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[n];
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int result = fibonachi(n);
	cout << result << '\n';
}