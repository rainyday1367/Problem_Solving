#include<iostream>

using namespace std;
int a[9][9];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int max = 0; int row = 0; int col = 0;
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> a[i][j];
			if (max < a[i][j]) {
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}
	cout << max << '\n';
	cout << row + 1 << ' ' << col + 1 << '\n';
	return 0;
}