#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	int n;
	cin >> s >> n;
	int result = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			result = result * n + (s[i] - '0');
		}
		else {
			result = result * n + (s[i] - 'A' + 10);
		}
	}
	cout << result << '\n';
}