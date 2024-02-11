#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {		// 구조체를 통해 자료형 생성
	int x, y;
};

  bool cmp(Point &u, Point &v) {	// sort에 사용할 비교함수
	if (u.x < v.x) {
		return true;
	}
	else if (u.x == v.x) {
		return (u.y < v.y);
	}
	else 
		return false;
}

int main() {
	int n;
	cin >> n;
	vector <Point> a(n);
	for (int i=0; i<n; i++) {	// 입력받음
		cin >> a[i].x >> a[i].y;
	}
	sort(a.begin(), a.end(), cmp);	// 정렬
	for (int i=0; i<a.size(); i++) {	// 출력
		cout << a[i].x << " " << a[i].y << '\n';
	}
	return 0;
}