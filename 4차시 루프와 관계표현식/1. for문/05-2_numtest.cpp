// numtest.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "카운트 시작값을 입력하시오 : ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << endl;
	cout << "i = " << i << "이므로 루프를 종료합니다." << endl;
}

// 결과
// 카운트 시작값을 입력하시오 : 10
// i = 10
// i = 9
// i = 8
// i = 7
// i = 6
// i = 5
// i = 4
// i = 3
// i = 2
// i = 1
// i = 0이므로 루프를 종료합니다.