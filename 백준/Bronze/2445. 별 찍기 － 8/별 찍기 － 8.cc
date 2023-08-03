#include <bits/stdc++.h>
using namespace std;
int num[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) cout << "*";
        for (int j = 1; j <= 2 * n - 2 * i; j++) cout << " ";
        for (int j = 1; j <= i; ++j) cout << "*";
        cout << '\n';
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (2 * n - 2 * i - 2)/2; ++j) cout << "*";
        for (int j = 0; j <= i; ++j) cout << " ";
        for (int j = 0; j <= i; ++j) cout << " ";
        for (int j = 0; j < (2 * n - 2 * i - 2)/2; ++j) cout << "*";
        cout << '\n';
    }
    return 0;
}
