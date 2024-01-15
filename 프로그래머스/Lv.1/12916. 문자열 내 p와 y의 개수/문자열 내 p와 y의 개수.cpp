#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count= 0, y_count = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'p' || s[i] == 'P') {
            p_count++;
        } else if(s[i] == 'y' || s[i] == 'Y') {
            y_count++;
        }
    }
    
    if(p_count != y_count) {
        answer = false;
    }
    
    cout << "Hello Cpp" << endl;
    return answer;
}