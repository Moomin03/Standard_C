// firstref.cpp
#include <iostream>
using namespace std;
int main(void) {
	int rats = 101;
	int &rodents = rats;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "rats의 주소 : " << &rats << endl;
	cout << "rodents의 주소 : " << &rodents << endl;
	return 0;
}

// 결과
// rats = 101
// rodents = 101
// rats = 102
// rodents = 102
// rats의 주소 : 0x16f35b668
// rodents의 주소 : 0x16f35b668