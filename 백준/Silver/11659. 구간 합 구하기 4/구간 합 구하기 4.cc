#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int s[100001] = { 0, };
	for (int i = 1; i <= n; ++i) {
		int temp;
		cin >> temp;
		if (i == 1) {
			s[i] = temp;
		}
		else {
			s[i] = s[i-1] + temp;
		}
	}
	for (int i = 0; i < m; ++i) {
		int start, end;
		cin >> start >> end;
		cout << s[end] - s[start - 1] << '\n';
	}
}