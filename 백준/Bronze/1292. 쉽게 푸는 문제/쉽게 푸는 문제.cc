#include <iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B;
	int count = 0, sum = 0, a[1000];
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < i && count < 1000; j++) {
			a[count++] = i;
		}
	}
	for (int i = A - 1; i < B; i++) {
		sum += a[i];
	}
	cout << sum;
}