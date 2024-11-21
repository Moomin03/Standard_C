// 연습문제 3번.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "[시스템] 사용자가 입력한 모든 수의 합을 구합니다." << endl;
	cout << "[시스템] 종료하고 싶을때는 꼭 0을 입력해주세요!" << endl;
	cout << "--------------------------------------" << endl;
	int number;
	int sum = 0;
	while (number != 0) {
		cout << "[시스템] 정수 입력 : ";
		cin >> number;
		sum += number;
	}
	cout << "프로그램이 종료되었습니다." << endl;
	cout << "입력하신 총 정수의 합은 " << sum << "입니다." << endl;
	return 0;
}

// 결과
// [시스템] 사용자가 입력한 모든 수의 합을 구합니다.
// [시스템] 종료하고 싶을때는 꼭 0을 입력해주세요!
// --------------------------------------
// [시스템] 정수 입력 : 1
// [시스템] 정수 입력 : 2
// [시스템] 정수 입력 : 3
// [시스템] 정수 입력 : 4
// [시스템] 정수 입력 : 5
// [시스템] 정수 입력 : 6
// [시스템] 정수 입력 : 7
// [시스템] 정수 입력 : 8
// [시스템] 정수 입력 : 9
// [시스템] 정수 입력 : 10
// [시스템] 정수 입력 : 0
// 프로그램이 종료되었습니다.
// 입력하신 총 정수의 합은 55입니다.