#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    string str = to_string(n);
    for(int i = 0; i < str.size(); i++){
        sort(str.rbegin(), str.rend());
    }
    long long answer = stoll(str);
    return answer;
}