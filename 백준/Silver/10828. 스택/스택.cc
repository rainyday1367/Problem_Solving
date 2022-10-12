#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    int a;
    stack <int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> a;
            x.push(a);
        }
        if (str == "pop")
        {
            if (x.empty() == 0)
            {
                cout << x.top() << '\n';
                x.pop();
            }
            else if (x.empty() == 1)
                cout << -1 << '\n';
        }
        if (str == "top")
        {
            if (x.empty() == 0)
                cout << x.top() << '\n'; 
            else if (x.empty() == 1)
                cout << -1 << '\n';
        }
        if (str == "size")
            cout << x.size() << '\n';
        if (str == "empty")
        {
            cout << x.empty() << '\n';
        }
    }
    return 0;
}
// s.top() : 스택의 최상위 값을 출력하는 함수
// s.pop() : 스택의 최상위 값을 스택에서 제거하는 함수
// s.push(val) : val값을 스택에 넣어주는 함수
// s.empty() : 스택이 비어있으면 1, 비어있지않으면 0을 반환하는 함수
// s.size() : 스택의 사이즈를 반환하는 함수
