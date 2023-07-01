#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int num1 = stoi(a);
	int num2 = stoi(b);
	if (a > b)
		cout << a << '\n';
	else
		cout << b << '\n';
}