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
	//for 루프에서 *i는 현재 처리되는 요소를 가리키는 반복자 i를 간접 참조하기 위해 사용됩니다. s가 문자열 집합(set of strings)인 경우, *i는 문자열 값을 나타냅니다.

//루프는 rbegin()과 rend()를 사용하여 집합을 역순으로 반복하며, 이는 각각 집합의 끝과 시작 지점에 대한 역순 반복자를 반환합니다. 루프는 반복자 i를 통해 각 요소의 값을 액세스하고 출력함으로써 집합의 각 요소를 역순으로 출력합니다.

//따라서 *i는 루프에서 처리되는 현재 요소의 문자열 값을 액세스하고 출력하기 위해 사용됩니다.
}
