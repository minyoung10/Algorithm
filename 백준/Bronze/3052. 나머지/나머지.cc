#include <iostream>
using namespace std;
int main(void) {
	int i, cnt=0, num[10], rem[42]={0,};
	for (i=0; i<10; i++){
		cin >> num[i];
		rem[num[i]%42]++;
	}	
	for (i=0; i<42; i++){
		if(rem[i] != 0) cnt++;
	}
	cout << cnt;	
	return 0;
}