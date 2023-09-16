#include <bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	set<string> s;
	int n;
	cin >> n;
	while (n--) {
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			s.insert(name);
		else
			s.erase(name);
	}
	for (auto i = s.rbegin(); i != s.rend(); ++i)
		cout << *i << '\n';
	return 0;
}