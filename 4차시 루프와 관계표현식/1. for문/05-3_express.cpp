// express.cpp
#include <iostream>
using namespace std;
int main(void) {
	int x;

	cout << "대입 표현식 x = 100의 값은 " << (x=100) << endl;
	cout << "현재 x의 값은 " << x << endl;
	cout << "관계 표현식 x < 3의 정수값은 " << (x<3) << endl;
	cout << "관계 표현식 x > 3의 정수값은 " << (x>3) << endl;

	cout.setf(ios_base::boolalpha); // 최신 C++ 기능
	cout << "관계 표현식 x < 3의 bool값은 " << (x<3) << endl;
	cout << "관계 표현식 x > 3의 bool값은 " << (x>3) << endl;
	return 0;
}

// 결과
// 대입 표현식 x = 100의 값은 100
// 현재 x의 값은 100
// 관계 표현식 x < 3의 정수값은 0
// 관계 표현식 x > 3의 정수값은 1
// 관계 표현식 x < 3의 bool값은 false
// 관계 표현식 x > 3의 bool값은 true