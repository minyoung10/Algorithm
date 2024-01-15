#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto target : arr) {
        if (target % divisor == 0) answer.push_back(target);
    }
    if (answer.empty()) return {-1};
    sort(answer.begin(), answer.end());
    return answer;
}