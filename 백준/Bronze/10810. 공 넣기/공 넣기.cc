#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int arr[101] = { 0, }; //공이 없는 바구니는 전부 0으로 초기화
int main()
{
	int n, m;
	int i, j, k;
	cin >> n >> m;
	while(m--){
		cin >> i >> j >> k;
		for (int z = i; z <= j; ++z) {//i번 바구니부터 시작이라는 것을 강조
			arr[z] = k;
		}
	}
	for (int x = 1; x <= n; ++x) {
		cout << arr[x] << ' ';
	}
}