#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main()
{
    fastio;
    int  N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N - j; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}