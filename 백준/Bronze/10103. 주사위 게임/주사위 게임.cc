#include <iostream>
using namespace std;
int main() {
	int chang = 100 , sangduk = 100;
	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			sangduk -= a;
		}
		else if (a < b) {
			chang -= b;
		}
	}
	cout << chang  << '\n' << sangduk;
	return 0;
}