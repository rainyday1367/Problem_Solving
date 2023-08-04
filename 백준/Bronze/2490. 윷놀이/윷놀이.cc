#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n[4]; //윷놀이 패
    for (int i = 0; i < 3; ++i) {
        int front = 0; int behind = 0;
        for (int i = 0; i < 4; ++i) {
            cin >> n[i];
            if (n[i] == 1) behind++;
            else front++;
        }
        if (behind == 3 || front == 1) cout << "A" << '\n';
        else if (behind == 2 || front == 2) cout << "B" << '\n';
        else if (behind == 1 || front == 3) cout << "C" << '\n';
        else if (front == 4) cout << "D" << '\n';
        else if (behind == 4) cout << "E" << '\n';
    }
    return 0;
}

