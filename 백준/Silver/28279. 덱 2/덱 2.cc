#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	deque<int> q;
	while (n--) {
		int idx;
		cin >> idx;
		if (idx == 1) {
			int x;
			cin >> x;
			q.push_front(x);
		}
		else if (idx == 2) {
			int x;
			cin >> x;
			q.push_back(x);
		}
		else if (idx == 3) {
			if (q.empty()) cout << -1 << '\n';
			else {
				int x = q.front();
				q.pop_front();
				cout << x << '\n';
			}
		}
		else if (idx == 4) {
			if (q.empty()) cout << -1 << '\n';
			else {
				int x = q.back();
				q.pop_back();
				cout << x << '\n';
			}
		}
		else if (idx == 5) {
			cout << q.size() << '\n';
		}
		else if (idx == 6) {
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (idx == 7) {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		else {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}
}