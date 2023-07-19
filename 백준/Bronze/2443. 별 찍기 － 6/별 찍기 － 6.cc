#include <iostream>
using namespace std;
 
int main() {
 
	int N = 0;
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
 
		for (int j = 2*(N-i) -1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}