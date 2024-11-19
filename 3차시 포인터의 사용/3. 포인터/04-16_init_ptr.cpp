#include <iostream>
using namespace std;
int main(void) {
	int higgens = 5;
	int* pt = &higgens;

	cout << "higgens의 값 : " << higgens << endl;
	cout << "higgens의 주소 : " << &higgens << endl;

	cout << "pt의 값 : " << *pt << endl;
	cout << "pt의 주소 : " << pt << endl;

	return 0;
}

// 결과
// higgens의 값 : 5
// higgens의 주소 : 0x16babf618
// pt의 값 : 5
// pt의 주소 : 0x16babf618