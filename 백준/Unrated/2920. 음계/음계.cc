#include <bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int mus[8];
	int asc = 0; int des = 0;
	for (int i = 0; i < 8; i++) {
		cin >> mus[i];
	}
	for (int i = 0; i < 8; i++) {
		if (mus[i] == i + 1) asc+=1;
		else if (mus[i] == 8 - i) des+=1;
	}
	if (asc == 8) cout << "ascending";
	else if (des == 8) cout << "descending";
	else cout << "mixed";
	return 0;
}