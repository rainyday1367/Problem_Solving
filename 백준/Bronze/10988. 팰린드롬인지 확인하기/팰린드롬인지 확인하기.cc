#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	string ori_s, rev_s;
	cin >> s;
	int sum;
	ori_s = s;
	reverse(s.begin(), s.end());
	rev_s = s;
	for (int i = 0; i < s.length(); ++i) {
		if (ori_s == rev_s) sum = 1;
		else sum = 0;
	}
	cout << sum << '\n';
	return 0;
}