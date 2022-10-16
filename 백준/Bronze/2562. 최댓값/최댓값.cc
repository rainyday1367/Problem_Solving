#include <iostream>
using namespace std;

int main() {
  int a[9] = {0,};
  int mx=0, idx = 0;
  for(int i=0; i<9; i++)
  {
    cin >> a[i];
    if(mx<a[i])
    {
      mx = a[i];
      idx = i+1;
    }
  }
  cout << mx << '\n' << idx;
}