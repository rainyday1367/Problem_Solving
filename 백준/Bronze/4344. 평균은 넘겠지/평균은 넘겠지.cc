#include <iostream>
using namespace std;
int cal2[1000] = { 0, };
int main() {
	int n; int test;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		int sum = 0; int cal = 0; double low = 0; double c = 0;
		for (int j = 0; j < a; j++)
		{
			cin >> test;
			cal2[j] = test;
			sum += cal2[j];
		}
		cal = sum / a;
		for (int i = 0; i < a; i++)
		{
			if (cal2[i] > cal)
				low += 1;
		}
		c = (low * 100) / a;
		cout.precision(3);
		cout << fixed << c <<'%' << '\n';
	}
	return 0;
}