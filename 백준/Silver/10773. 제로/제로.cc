#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int a;
    int resume = 0;
    stack <int> x;
    //n만큼 명령어를 입력받기 위한 for문
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        if (a == 0)
        {
            if (!x.empty())
                x.pop();
            else
                x.push(0);
        }
        else
            x.push(a);
    }
    while (1) {
        if (!x.empty())
        {
            resume += x.top();
            x.pop();
        }
        else
            break;
    }
    cout << resume << '\n';
    return 0;
}
// s.top() : 스택의 최상위 값을 출력하는 함수
// s.pop() : 스택의 최상위 값을 스택에서 제거하는 함수
// s.push(val) : val값을 스택에 넣어주는 함수
// s.empty() : 스택이 비어있으면 1, 비어있지않으면 0을 반환하는 함수
// s.size() : 스택의 사이즈를 반환하는 함수
