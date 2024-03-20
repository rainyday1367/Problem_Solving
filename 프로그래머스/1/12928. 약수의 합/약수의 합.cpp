#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum{};
    for(int i = 1; i <= n; ++i){
        if(n%i == 0){
            sum += i;
        }
    }
    int answer = sum;
    return answer;
}