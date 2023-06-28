#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < alphabet.length(); i++)
		cout << (int)s.find(alphabet[i]) << " ";
	return 0;
}