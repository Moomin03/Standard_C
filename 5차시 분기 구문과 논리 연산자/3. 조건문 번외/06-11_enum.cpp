// enum.cpp
#include <iostream>
using namespace std;
enum {red, orange, yellow, green, blue, violet, indigo};

int main(void) {
	cout << "컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:";
	int code;
	cin >> code;
	while (code >= red && code <= indigo) {
		switch (code) 
		{
		case red:
			cout << "입술은 붉었습니다." << endl; break;
		case orange:
			cout << "머리카락은 귤색이었습니다." << endl; break;
		case yellow:
			cout << "신발은 노랑색이었습니다." << endl; break;
		case green:
			cout << "손톱은 초록색이었습니다." << endl; break;
		case blue:
			cout << "스웨터는 파랑색이었습니다." << endl; break;
		case violet:
			cout << "눈은 보라색이었습니다." << endl; break;
		case indigo:
			cout << "분위기는 쪽빛이었습니다." << endl; break;
		}
		cout << "컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:";
		cin >> code;
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}

// 결과
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:0
// 입술은 붉었습니다.
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:2
// 신발은 노랑색이었습니다.
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:4
// 스웨터는 파랑색이었습니다.
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:5
// 눈은 보라색이었습니다.
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:6
// 분위기는 쪽빛이었습니다.
// 컬러 코드 (0, 1, 2, 3, 4, 5, 6)을 입력하시오:7
// 프로그램을 종료합니다.