#include <iostream>

using namespace std;
int n, m;
int arr[10];
bool isvalid[10];
void num(int x) {
	if (x == m) {
		for (int i = 0; i < m; ++i) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; ++i) {//수 중복이 없는 수열 만들기
		if (!isvalid[i]) {
			arr[x] = i;
			isvalid[i] = 1;
			num(x + 1);
			isvalid[i] = 0;
		}
	}
}//백트랙킹의 기본 수식
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	num(0);
}