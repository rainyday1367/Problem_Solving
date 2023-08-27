#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int min= 0; int max = 0;
    min = gcd(a,b);
    max = a*b/gcd(a,b);
    cout << min << '\n';
    cout << max << '\n';
    return 0;
}
