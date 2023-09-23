#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	queue<char> q;
	int sau = 0; int tuk = 0;
	while (n--) {
		char c;
		cin >> c;
		if (c == 's') sau++;
		else tuk++;
		q.push(c);
	}
	while (sau != tuk) {
		if (q.front() == 's') {
			sau--;
			q.pop();
		}
		else {
			tuk--;
			q.pop();
		}
	}
	while (!q.empty()) {
		cout << q.front();
		q.pop();
	}
}