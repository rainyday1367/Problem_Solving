#include <iostream>
using namespace std;
int a[1000];
int main()
{
    int  n;
    double  mx = 0; double sum = 0;
    double re = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mx < a[i])
            mx = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] / mx) * 100;
    }
    re = sum / n;
    cout << re << endl;
}
