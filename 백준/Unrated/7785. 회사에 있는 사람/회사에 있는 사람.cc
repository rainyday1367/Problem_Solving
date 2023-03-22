#include <bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	set<string> s;//연관 컨테이너, 균형 이진트리 노드 기반, key라 불리는 원소의 집함 중복 x
	int n;
	cin >> n;
	while (n--) {
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			s.insert(name);
		else
			s.erase(name);
	}
	for (auto i = s.rbegin(); i != s.rend(); ++i)
		cout << *i << '\n';//반대로 출력하기 위해 사용하는 rbegin과 rend 세트처럼
	return 0;
}
