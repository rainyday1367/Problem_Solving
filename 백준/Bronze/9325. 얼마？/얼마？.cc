#include <bits/stdc++.h> 
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int price = 0;
		cin >> price;
		int op = 0;
		cin >> op;
		while (op--) {
			int q, r;
			cin >> q >> r;
			price += q * r;
		}
		cout << price << '\n';
	}
	return 0;
}