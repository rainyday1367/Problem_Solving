#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s; cin >> s;
	char str[5] = {'a','e','i','o','u'};
	int idx{};
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < 5; ++j) {
			if (s[i] == str[j]) idx++;
		}
	}
	cout << idx << '\n';
	return 0;
}