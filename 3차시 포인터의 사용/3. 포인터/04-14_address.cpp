#include <iostream>
int main(void) {
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts의 값 : " << donuts << endl;
	cout << "donuts의 주소 : " << &donuts << endl;

	cout << "cups의 값 : " << cups << endl;
	cout << "cups의 주소 : " << &cups << endl;

	return 0;
}

// 결과
// donuts의 값 : 6
// donuts의 주소 : 0x16ce37628
// cups의 값 : 4.5
// cups의 주소 : 0x16ce37620