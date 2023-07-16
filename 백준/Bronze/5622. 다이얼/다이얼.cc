#include <iostream>
#include <string>
using namespace std;
int alpha[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
int main() {
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); ++i) {
		sum += alpha[s[i] - 'A'];
	}
	cout << sum << '\n';
}