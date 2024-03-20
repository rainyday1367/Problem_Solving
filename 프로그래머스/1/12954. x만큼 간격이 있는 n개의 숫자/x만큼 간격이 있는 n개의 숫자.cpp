#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int i = 0; i < n; ++i){
        int psh = (i * x) + x;
        answer.push_back(psh);
    }
    return answer;
}