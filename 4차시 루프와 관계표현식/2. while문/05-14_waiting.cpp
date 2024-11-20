// waiting.cpp
#include <iostream>
#include <ctime>
using namespace std;
int main(void) {
	cout << "지연 시간을 초 단위로 입력하시오 : ";
	float sec;
	cin >> sec;
	clock_t delay = sec * CLOCKS_PER_SEC;

	cout << "카운트를 시작합니다.\a" << endl;
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "종료" << endl;
	return 0;
}

// 결과
// 지연 시간을 초 단위로 입력하시오 : 10
// 카운트를 시작합니다.
// 종료