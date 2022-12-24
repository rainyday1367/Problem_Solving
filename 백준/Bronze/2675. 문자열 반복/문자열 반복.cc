#include<iostream>
using namespace std;
int main()
{
	int T, R;
	string s;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << s[j];
			}
		}
		cout << '\n';
	}
}
