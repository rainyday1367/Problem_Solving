#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0;
	int pri;
	cin >> pri;
	for (int i = 0; i < 9; ++i) {
		int book;
		cin >> book;
		sum += book;
	}
	cout << pri-sum << '\n';
}