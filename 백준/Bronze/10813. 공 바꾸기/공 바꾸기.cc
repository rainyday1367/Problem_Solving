#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int arr[101] = { 0, };
int main()
{
	int n, m;
	int i, j;
	int ball = 1;
	cin >> n >> m;
	for (int o = 0; o < n; ++o) {
		arr[o + 1] = ball;
		++ball; //해당 공을 넣을 ball 변수 선언, 배열을 0부터 시작이니 +1 해주기
	}
	while(m--){
		cin >> i >> j;
		swap(arr[i], arr[j]); //값을 변경할 c++의 swap 함수
	}
	for (int x = 1; x <= n; ++x) {
		cout << arr[x] << ' ';
	}
}