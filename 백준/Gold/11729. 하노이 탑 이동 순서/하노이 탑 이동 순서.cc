#include <bits/stdc++.h>
using namespace std;

void func(int a, int b, int n) {
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    func(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    func(6 - a - b, b, n - 1); //1,3까지 다 돈게 아니라 재귀 함수를 다 돈것이라 보면 된다.
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    cout << (1 << k) - 1 << '\n';//right shift 비트연산자 1을 기준으로 k칸 밀어라 2의 k승, 1은 2진수의 0,1?
    func(1, 3, k);
}