#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; int b = 5;
	int car = 0;
	cin >> n;
	while (b--) {
		int a;
		cin >> a;
		if (n == a) car++;
	}
	cout << car << '\n';
}