#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int num;
	int fin = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		for (int i = 1; i <= num; ++i) { // 매 입력받은 수를 나누어지면 cnt가 증가
			if (num % i == 0) cnt++;
		}
		if (cnt == 2) fin++; //소수의 조건 나누어지는 수가 1과 자기 자신이다.
		cnt = 0; // 매 숫자마다 count 값 초기화
	}
	cout << fin << '\n';
	return 0;
}