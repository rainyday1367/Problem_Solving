#include <iostream>
using namespace std;
int main()
{
    int  n;
    int sum = 0;
    cin >> n;
    sum = n % 8;
    if (sum == 1)
        cout << 1 << endl;
    else if (sum == 2 or sum == 0)
        cout << 2 << endl;
    else if (sum == 3 or sum == 7)
        cout << 3 << endl;
    else if (sum == 4 or sum == 6)
        cout << 4 << endl;
    else if (sum == 5)
        cout << 5 << endl;
}
