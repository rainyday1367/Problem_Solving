#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main()
{
    fastio;
    int x, y;
    cin >> x >> y;
    while (x != 1) {
        if (x == 2||x == 4||x == 6||x == 8||x == 9||x == 11)
            y += 31;
        else if (x == 3)
            y += 28;
        else
            y += 30;
        x--;
    }
    if (y % 7 == 1) cout << "MON" << '\n';
    else if (y % 7 == 2) cout << "TUE" << '\n';
    else if (y % 7 == 3) cout << "WED" << '\n';
    else if (y % 7 == 4) cout << "THU" << '\n';
    else if (y % 7 == 5) cout << "FRI" << '\n';
    else if (y % 7 == 6) cout << "SAT" << '\n';
    else if (y % 7 == 0) cout << "SUN" << '\n';

}