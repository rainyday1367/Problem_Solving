#include <iostream>
using namespace std;

int cnt = 0;
int n;
bool isused[40];
bool isused2[40];
bool isused3[40];

void func(int cur) {
	if (cur == n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (isused[i] || isused2[i + cur] || isused3[i - cur + n - 1]) continue;
		isused[i] = 1;
		isused2[i + cur] = 1;
		isused3[i - cur + n - 1] = 1;
		func(cur + 1);
		isused[i] = 0;
		isused2[i + cur] = 0;
		isused3[i - cur + n - 1] = 0;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
}