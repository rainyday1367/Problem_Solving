#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int alpha[26] = { 0, };
int main() {
	fastio;
	string s;
	cin >> s;
    //대문자와 소문자 단어 몇 개 쓰였는지 배열에 저장
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] < 97) alpha[s[i] - 65]++;
		else alpha[s[i] - 97]++;
	}
	int max = 0; int index = 0;
	int cnt = 0;
    //max값과 그 max값이 들어있는 index를 저장 index는 나중에 아스키코드 대문자 A더해서 알파벳 찾기
	for (int i = 0; i < 26; ++i) {
		if (max < alpha[i]) {
			max = alpha[i];
			index = i;
		}
	}
    //max값을 쓰는 이유 중복이 있을 경우 ? 출력하기 위해서
	for (int i = 0; i < 26; ++i) {
		if (max == alpha[i]) cnt++;
	}
	if (cnt > 1) cout << '?' << '\n';
	else cout << (char)(index+ 65);
}