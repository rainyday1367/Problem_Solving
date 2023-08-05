#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	list<char> L;
	for (auto c : s) L.push_back(c);
	auto cursor = L.end();//커서는 딱히 출력을 할 필요가 없다,
	int n;
	cin >> n;
	while (n--) {
		char c;
		cin >> c;
		if (c == 'P') {
			char q;
			cin >> q;
			L.insert(cursor, q);
		}
		else if (c == 'L')
		{
			if (cursor != L.begin()) cursor--;
		}
		else if (c == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto i : L) cout << i;
}