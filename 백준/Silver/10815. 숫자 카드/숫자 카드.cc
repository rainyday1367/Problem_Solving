#include<iostream>
#include<algorithm>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m.insert(a);
	} //상근이가 가지고 있는 숫자 카드
	int b;
	cin >> b;
	for (int i = 0; i < b; i++) {
		int c;
		cin >> c;
		if (m.find(c) != m.end()) cout << 1 << ' ';
		else cout << 0 << ' '; //비교 대상을 만들지 않고 그냥 set의 find 함수를 사용해서 편하게 풀기 !
	}
}