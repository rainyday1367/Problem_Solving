#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(string& a, string& b) {
	int lena = a.size(); int lenb = b.size();
	int suma = 0; int sumb = 0;
	if (lena != lenb) return lena < lenb;
	for (int i = 0; i < a.size(); ++i) {
		if(isdigit(a[i])) suma += a[i] - '0';
	}
	for (int i = 0; i < b.size(); ++i) {
		if (isdigit(b[i])) sumb += b[i] - '0';
	}
	if (suma != sumb) return suma < sumb;
	return a < b;
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
	sort(v.begin(), v.end(),cmp);//비교 함수 사용해보기
	for (int i = 0; i < n; ++i) {
		cout << v[i] << '\n';
	}
}