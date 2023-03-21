#include <bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s1, s2;//s1, s2 : s1 : 과목이름 s2 : 점수
	double score = 0;//최종 학점
	int hak;//학점
	int haksum = 0;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> hak >> s2;
		haksum += hak;
		if (s2 == "A+") { score += 4.3 * (double)hak; }
		else if (s2 == "A0") { score += 4.0 * (double)hak; }
		else if (s2 == "A-") { score += 3.7 * (double)hak; }
		else if (s2 == "B+") { score += 3.3 * (double)hak; }
		else if (s2 == "B0") { score += 3.0 * (double)hak; }
		else if (s2 == "B-") { score += 2.7 * (double)hak; }
		else if (s2 == "C+") { score += 2.3 * (double)hak; }
		else if (s2 == "C0") { score += 2.0 * (double)hak; }
		else if (s2 == "C-") { score += 1.7 * (double)hak; }
		else if (s2 == "D+") { score += 1.3 * (double)hak; }
		else if (s2 == "D0") { score += 1.0 * (double)hak; }
		else if (s2 == "D-") { score += 0.7 * (double)hak; }
		else {
			score += 0.0;
		}
	}
	double fnscore = score / (double)haksum;
	fnscore += 0.000000000001;
	cout << fixed << setprecision(2) << fnscore << "\n";
	return 0;
}