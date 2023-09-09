#include <bits/stdc++.h> 
using namespace std;
int main() {
	int sum = 0;
	int test[5] = { 0, };
	for (int i = 0; i < 5; ++i) {
		cin >> test[i];
		sum += test[i];
	}
	cout << sum << '\n';
	return 0;
}