#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s1, s2;
    bool T;
    int alpha[26]; int alpha2[26];
    while(n--){
        cin >> s1 >> s2;
        int sum = 0;
        T = true;
        fill(alpha, alpha + 26, 0);
        fill(alpha2, alpha2 + 26, 0);
        for (int i = 0; i < s1.size(); ++i) {
            alpha[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.size(); ++i) {
            alpha2[s2[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (alpha[i] != alpha2[i]) {
                T = false;
                break;
            }
        }
        if (T) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
    return 0;
}