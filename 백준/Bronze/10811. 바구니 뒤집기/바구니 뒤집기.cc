
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i+1;
    }
    
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        
        for (int j = 0; j < (r-l+1)/2; j++) {
            swap(v[l+j-1], v[r-j-1]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}