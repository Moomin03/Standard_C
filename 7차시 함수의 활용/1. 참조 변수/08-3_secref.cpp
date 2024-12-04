// secref.cpp
#include <iostream>
using namespace std;
int main(void) {
	int rats = 101;
	int &radents = rats;

	cout << "rats : " << rats << endl;
	cout << "radents : " << radents << endl;

	cout << "rats address : " << &rats << endl;
	cout << "radents address : " << &radents << endl;

	int bunnies = 50;
	radents = bunnies;
	cout << "bunnies : " << bunnies << endl;
	cout << "rats : " << rats << endl;
	cout << "radents : " << radents << endl;

	cout << "bunnies address : " << &bunnies << endl;
	cout << "rats address : " << &rats << endl;
	cout << "radents address : " << &radents << endl;

	return 0;
}

// 결과
// rats : 101
// radents : 101
// rats address : 0x16fba3668
// radents address : 0x16fba3668
// bunnies : 50
// rats : 50
// radents : 50
// bunnies address : 0x16fba365c
// rats address : 0x16fba3668
// radents address : 0x16fba3668