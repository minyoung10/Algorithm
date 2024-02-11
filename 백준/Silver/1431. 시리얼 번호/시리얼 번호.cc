#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int sumLength(string str)
{
    int result = 0;
    for (char ch : str)
    {
        if (ch >= '0' && ch <= '9')
            result += ch - '0';
    }
    return result;
}
bool compare(string a, string b)
{
    if (a.length() < b.length()) return 1;
    else if (a.length() > b.length()) return 0;
    else
    {
        int sumA = sumLength(a);
        int sumB = sumLength(b);

        if (sumA != sumB) return sumA < sumB;
        else return a < b;

    }
}
int main()
{
    vector<string> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vec.push_back(str);
    }

    sort(vec.begin(), vec.end(), compare);

    for (auto au : vec)
    {
        cout << au << "\n";
    }
}