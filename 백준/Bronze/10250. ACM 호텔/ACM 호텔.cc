#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int t;
	int h, w, n;
	int fin = 0;//최종 호수 값 
	int floor = 0; //층
	int lake = 0; //호수
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> h >> w >> n;
		floor = n % h;
		lake = (n / h) + 1;
		if (floor == 0) {
			fin = (h*100) + (n/h);
			cout << fin << '\n';
		}
		else {
			fin = (floor * 100) + lake;
			cout << fin << '\n';
		}
	}
}