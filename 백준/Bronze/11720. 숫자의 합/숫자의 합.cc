#include <iostream>
//char a[100] = {};
using namespace std;
int main()
{
	char a[100] = {};
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += (int)(a[i] - '0');
	}
	cout << sum << '\n';
}