#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	string out_s;
	cin >> out_s;
	int cnt = count(s.begin(), s.end(), 'a');
	int cnt2 = count(out_s.begin(), out_s.end(), 'a');
	if (cnt >= cnt2) cout << "go";
	else cout << "no";
	return 0;
}