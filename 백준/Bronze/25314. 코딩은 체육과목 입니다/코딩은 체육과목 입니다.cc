#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
  fastio;
  int n;
  cin >> n;
  string s = "int";
  string lng = "long";
  int sum = n/4;
  for(int i = 0; i < sum; ++i){
    cout << lng << ' ';
  }
  cout << s;
}