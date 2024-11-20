// plus_one.cpp
#include <iostream>
using namespace std;
int main(void) {
	int a = 20;
	int b = 20;
	cout << "a = " << a << " / b = " << b << endl;
	cout << "a = " << ++a << " / b = " << b++ << endl;
	cout << "a = " << a << " / b = " << b << endl;
	return 0;
}

// 결과
// a = 20 / b = 20
// a = 21 / b = 20
// a = 21 / b = 21

// 추가설명
// 전위 / 후위 연산으로 나누어지는데 전위는 실행 즉시 숫자를 더하고,
// 후위는 호출한 이후에 숫자를 더하는 차이가 있다.