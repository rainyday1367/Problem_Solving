#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	map<char, char> m;
	m['D'] = 'A';
	m['E'] = 'B';
	m['F'] = 'C';
	m['G'] = 'D';
	m['H'] = 'E';
	m['I'] = 'F';
	m['J'] = 'G';
	m['K'] = 'H';
	m['L'] = 'I';
	m['M'] = 'J';
	m['N'] = 'K';
	m['O'] = 'L';
	m['P'] = 'M';
	m['Q'] = 'N';
	m['R'] = 'O';
	m['S'] = 'P';
	m['T'] = 'Q';
	m['U'] = 'R';
	m['V'] = 'S';
	m['W'] = 'T';
	m['X'] = 'U';
	m['Y'] = 'V';
	m['Z'] = 'W';
	m['A'] = 'X';
	m['B'] = 'Y';
	m['C'] = 'Z';
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		cout << m[s[i]];
	}
}