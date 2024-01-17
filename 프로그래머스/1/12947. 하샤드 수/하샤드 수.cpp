#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int sum = 0;
    for (auto c : s) sum += c - '0';// 각 자릿수 합
    if (x % sum) return false;// 나눠서 나머지가 나오면
    return true;
}