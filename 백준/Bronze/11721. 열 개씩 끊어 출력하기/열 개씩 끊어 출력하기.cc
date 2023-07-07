#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main()
{
    fastio;
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; ++i) { //char는 0부터 시작한다 0~9 : 10글자
        cout << s[i];
        if (i % 10 == 9) cout << '\n';
    }
}