#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> arr;
	int n; string s;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "push") {
			int j;
			cin >> j;
			arr.push(j);
		}
		else if (s == "pop") {
			if (arr.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << arr.top() << '\n';
				arr.pop();
			}
		}
		else if (s == "size") {
			cout << arr.size() << '\n';
		}
		else if (s == "top") {
			if (arr.empty() == 1) {
				cout << -1 << '\n';
			}
			else
				cout << arr.top() << '\n';
		}
		else if (s == "empty") {
			if (arr.empty() == 1) {
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
	}
	return 0;
}