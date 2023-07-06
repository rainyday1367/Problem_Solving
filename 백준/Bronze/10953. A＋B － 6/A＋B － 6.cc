#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a, b;
	char s;
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> s >> b; //string으로 입력시에, 다음 숫자 b도 수로 인식해서 안나옴
		//파싱대체는 추가 공부
		cout << a + b << '\n';
	}
}