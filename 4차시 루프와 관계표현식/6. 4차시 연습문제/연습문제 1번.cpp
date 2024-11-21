// 연습문제 1번.cpp
// 조건 1. 사용자에게 2개의 정수를 입력받기
// 조건 2. 두 정수 사이의 모든 합을 구하기
#include <iostream>
using namespace std;
int main(void) {
	int first, second;
	cout << "[시스템] 4차시 연습문제 풀이입니다." << endl;
	cout << "---------------------------" << endl;
	cout << "[시스템] 두 정수를 입력해주세요(ex->3 5) : ";
	cin >> first >> second;
	cout << "[시스템] " << first << "부터 " << second << "사이의 정수의 합은 : ";
	int sum = 0;
	for (int i = first; i <= second; i++) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}

// 결과
// [시스템] 4차시 연습문제 풀이입니다.
// ---------------------------
// [시스템] 두 정수를 입력해주세요(ex->3 5) : 2 9
// [시스템] 2부터 9사이의 정수의 합은 : 44