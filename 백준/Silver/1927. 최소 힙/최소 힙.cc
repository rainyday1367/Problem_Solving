#include <iostream>
#include <queue>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	priority_queue<int, vector<int>, greater<>> pq;
	int n;
	cin >> n;
	while (n--) {
		int idx;
		cin >> idx;
		if (idx == 0) {
			if (!pq.empty()) {
				int top = pq.top();
				pq.pop();
				cout << top << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			pq.push(idx);
		}
	}
}