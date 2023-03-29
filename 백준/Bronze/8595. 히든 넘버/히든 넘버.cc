#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	long long n, sum = 0; string s; cin >> n >> s; //입력해야 할 수 n -> 정수, 입력해야할 문자열 s
	for (auto& i : s) if (!isdigit(i)) i = ' '; //auto로 s를 참조한다, 문자인지 숫자인지 참조한다 
	stringstream in(s); //파싱대체, ' ' 날리기 ?
	while (in >> n) sum += n;
	cout << sum << '\n';
}