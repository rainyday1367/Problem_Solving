#include <iostream>
using namespace std;
int a[31] = { 0, };
int main()
{
	int n;
	
	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		a[n] = 1;
	}
	for (int j = 1; j <31; j++)
	{
		if (a[j] != 1)
			cout << j << '\n';
	}
	return 0;
}