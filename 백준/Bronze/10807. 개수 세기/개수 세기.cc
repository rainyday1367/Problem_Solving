#include <iostream>
using namespace std;
int b[100] = { 0, };
int main()
{
	int n;
	int a;
	int v;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		b[i] = a;
	}
	cin >> v;
	for (int j = 0; j < n; j++)
	{
		if (b[j] == v)
			count += 1;
	}
	cout << count << '\n';
	return 0;
}