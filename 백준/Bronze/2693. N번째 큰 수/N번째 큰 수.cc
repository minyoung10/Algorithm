#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t; //테스트케이스 개수
    cin >> t;

    int a[10];

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> a[j]; //원소 10개 입력
        }
        sort(a, a + 10); //오름차순정리
        cout << a[7] << endl; //8번째 원소 출력
    }
    return 0;
}