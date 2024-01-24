
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;
    for(int i=0;i<targets.size();i++)
    {
        answer.push_back(0);
        for(int j=0;j<targets[i].size();j++)
        {
            char c = targets[i][j];//타겟 문자 c
            int type=101, flag=1;
            /*
              1 <= keymap원소길이 <= 100이고
              flag는 타겟문자를 못찾았을때를 위한 플래그
            */
            for(int k=0;k<keymap.size();k++)
            {
                for(int l=0;l<keymap[k].size();l++)
                {
                    if(keymap[k][l] == c)
                    {
                        type = min(type, l+1); // 가장 적게 타입하는 값을 저장
                        flag = 0; // 타입가능한 문자면
                        break;
                    }
                }
            }
            if (flag)//한번도 타입한적이 없다면
            {
                answer[i] = -1;
                break;
            }
            answer[i] += type;//타입한 값을 더해준다
        }
    }
    return answer;
}