// condit.cpp
#include <iostream>
int main(void) {
	using namespace std;
	int a, b;
	cout << "두개의 정수를 입력하시오 : ";
	cin >> a >> b;
	cout << "둘 중에서 더 큰 정수는 ";
	int c = a > b ? a:b;
	cout << c << "입니다." << endl;
	return 0;
}

// 결과
// 두개의 정수를 입력하시오 : 25 28
// 둘 중에서 더 큰 정수는 28입니다.