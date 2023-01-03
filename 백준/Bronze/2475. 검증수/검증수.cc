#include<iostream>
#include<cmath>
using namespace std;
int a[5] = { 0, };
int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += pow(a[i], 2);
	}
	sum = sum % 10;
	cout << sum;
}