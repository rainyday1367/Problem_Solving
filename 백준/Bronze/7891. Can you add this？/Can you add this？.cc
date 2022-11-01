#include <iostream>
using namespace std;
int main()
{
	int t;
	int a, b = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		cin >> a >> b;
		sum = a + b;
		cout << sum << '\n';
	}
	return 0;
}