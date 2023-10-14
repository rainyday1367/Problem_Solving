#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin >> s;
	int idx = 0;
	vector<string> v = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	//또 나오는거에 대한 처리가 필요
	for (int i = 0; i < v.size(); ++i) {
		while (1) {
			idx = s.find(v[i]);
			if (idx == string::npos)
				break;
			s.replace(idx, v[i].length(), "#");
		}
	}
	cout << s.length() << '\n';
}