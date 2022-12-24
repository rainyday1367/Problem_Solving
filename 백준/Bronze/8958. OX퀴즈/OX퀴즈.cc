#include <iostream>

using namespace std;
int main()
{
    int cnt = 1;
    int sum = 0;
    string k;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> k;
        for (int i = 0; i < k.length(); i++)
        {
            if (k[i] == '\O')
            {
                sum += cnt;
                cnt++;
            }
            else
            {
                cnt = 1;
            }
        }
        cout << sum <<'\n';
        sum = 0;
        cnt = 1;
    }
}