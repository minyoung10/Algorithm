#include <iostream>
using namespace std;

int main(){
  int T;
  float n;
  string s;
  scanf("%d", &T);
  for(int i=0;i<T;i++){
    scanf("%f", &n);
    getline(cin, s);
    for(int i=0; i<s.length();i++){
      if(s[i]=='@'){
        n*=3;
      }else if(s[i]=='%'){
        n+=5;
      }else if(s[i]=='#'){
        n-=7;
      } 
    }
    printf("%.2f\n", n);
  }
}
