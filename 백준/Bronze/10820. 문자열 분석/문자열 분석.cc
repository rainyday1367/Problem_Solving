#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	while (getline(cin, s)) {
		int a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (islower(s[i])) a++;
			else if (isupper(s[i])) b++;
			else if (isdigit(s[i])) c++;
			else if (isspace(s[i])) d++;
		}
		cout << a << " " << b << " " << c << " " << d << '\n';
	}
	return 0;
}