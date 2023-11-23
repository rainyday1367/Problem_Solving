#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int fin;
	cin >> fin;
	int idx{};
	int left = 0;
	int right = n - 1;
	while(left < right) {
		if (v[left] + v[right] == fin) {
			idx++;
			left++;
			right--;
		}
		else if (v[left] + v[right] < fin) {
			left++;
		}
		else {
			right--;
		}
	} //for문을 사용해서 풀면 O(N^2)이 되서 시간초과 발생, 그렇기 때문에 Merge sort의 아이디어인 투포인터를 사용 
	cout << idx << '\n';
	return 0;
}