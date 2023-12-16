#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	cin.ignore();
	while (n--) {
		stack<char> c;
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] != ' ') c.push(s[i]);
			else {
				while (!c.empty()) {
					cout << c.top();
					c.pop();
				}
				cout << s[i];
			}
		}
		while (!c.empty()) {
			cout << c.top();
			c.pop();
		}
		cout << '\n';
	}
}