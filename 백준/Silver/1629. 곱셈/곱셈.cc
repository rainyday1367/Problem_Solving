#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll a, ll b, ll c) {
    if (b == 1) return a % c; //base condition
    ll val = func(a, b / 2, c);
    val = val * val % c; //b가 너무 크면 long long이라도 범위를 벗어난다. 그래서 두번 나누어줌
    if (b % 2 == 0) return val; //b가 짝수면, 나눠서 곱한것이 맞음
    else return val* a% c; //b가 홀수면 a를 딱 한번 더 곱해서 리턴
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    ll result = func(a, b, c);
    cout << result;
}