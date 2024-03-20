#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pcnt = 0; int ycnt = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == 'p' || s[i] == 'P'){
            pcnt++;
        }
        if(s[i] == 'y' || s[i] == 'Y'){
            ycnt++;
        }
    }
    bool answer = true;
    if(pcnt != ycnt){
        answer = false;
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}