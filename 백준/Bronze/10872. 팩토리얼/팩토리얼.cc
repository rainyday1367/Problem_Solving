#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int factorial(int num);
int main() {
	fastio;
	int n;
	cin >> n;
	int result = 0;
	result = factorial(n);
	cout << result;
	return 0;
}
int factorial(int num) {
	int result = 1;
	for (int i = 1; i <= num; ++i) {
		result = i * result;
	}
	return result;
}