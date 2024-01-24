using namespace std;

long long solution(int price, int money, int count)
{
    long long cost = 1LL*price*((count+1)*count/2);//총 가격
    return money > cost ? 0 : cost - money;
}