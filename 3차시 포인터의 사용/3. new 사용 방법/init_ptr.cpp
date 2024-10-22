// init_ptr.cpp
#include <iostream>
using namespace std;
int main(void) {
	int higgens = 5;
	int *pt = &higgens;

	// higgen의 값과 주소
	cout << "Value of higgens : " << higgens << endl;
	cout << "Address of higgens : " << &higgens << endl << endl;

	// *pt의 값과 주소
	cout << "Value of *pt : " << *pt << endl;
	cout << "Address of *pt : " << pt << endl << endl;

	// *pt의 값을 다른 값으로 바꾸었을 때, higgend과 *pt의 변화
	*pt = 10;
	// higgen의 값과 주소
	cout << "Value of higgens : " << higgens << endl;
	cout << "Address of higgens : " << &higgens << endl << endl;

	// *pt의 값과 주소
	cout << "Value of *pt : " << *pt << endl;
	cout << "Address of *pt : " << pt << endl << endl;
	return 0;

	// *pt의 값을 바꾸었을 때 higgens의 값도 변하는구나!
}