#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(const string& a, const string& b) {
	int lena = a.size(); int lenb = b.size();
	if (lena != lenb) return lena < lenb;
	else {
		return a < b;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());
	for (auto& i : v) cout << i << '\n';
}