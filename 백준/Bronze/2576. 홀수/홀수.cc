#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    vector <int> result;
    int sum = 0;
    int check = 0;
    for (int i = 0; i < 7; ++i) {
        cin >> n;
        if (n % 2 == 1) {
            result.push_back(n);
        }
    }
    for (int i = 0; i < result.size(); ++i) sum += result[i];
    if (result.empty() == 1) {
        cout << -1 << '\n';
    }
    else {
        sort(result.begin(), result.end());
        cout << sum << '\n';
        cout << result[0];  
    }
    return 0;
}

