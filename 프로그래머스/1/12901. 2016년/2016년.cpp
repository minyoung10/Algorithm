#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string days[7] = {"THU", "FRI","SAT", "SUN","MON","TUE","WED"};
    int day_cnt[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};// 해당 월일때 이전까지의 지난 일수, 1월은 0번째 인덱스
    return days[(day_cnt[a-1]+b)%7];
}