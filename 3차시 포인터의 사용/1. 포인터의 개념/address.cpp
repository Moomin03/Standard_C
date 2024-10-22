// 포인터 : 데이터가 저장되는 위치를 표시
// address.cpp
#include <iostream>
int main(void) {
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts << endl;
	cout << "donuts value address = " << &donuts << endl; // 주소 : 16진수 표
	cout << "cups value = " << cups << endl;
	cout << "cups value address = " << &cups << endl;
	// 실제로 출력해보면 결과값이 4정도 차이가 나는데 int 타입이 4바이트를 사용하기 때문이다.
	// 만약 cups를 먼저 저장한다면 8바이트 차이가 나는데 double 타입이 8바이트를 사용하기 때문이다.
	return 0;
}