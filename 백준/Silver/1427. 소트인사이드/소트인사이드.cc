#include <bits/stdc++.h>

using namespace std;
int main() {
	vector<int> v;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		int num = s[i] - '0';
		v.push_back(num);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
	}
}