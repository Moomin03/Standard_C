#include <iostream>
using namespace std;
int main(void) {
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw : " << pw << endl;
	cout << "*pw : " << *pw << endl;
	pw += 1;
	cout << "pw : " << pw << endl;
	cout << "*pw : " << *pw << endl;

	cout << "ps : " << ps << endl;
	cout << "*ps : " << *ps << endl;
	ps += 1;
	cout << "ps : " << ps << endl;
	cout << "*ps : " << *ps << endl;

	cout << "stacks[0] : " << stacks[0] << endl;
	cout << "stacks[1] : " << stacks[1] << endl;

	cout << "*stacks : " << *stacks << endl;
	cout << "*(stacks + 1) : " << *(stacks+1) << endl;

	cout << sizeof(wages) << endl;
	cout << sizeof(stacks) << endl;

	return 0;
}

// 결과
// pw : 0x16f89f600
// *pw : 10000
// pw : 0x16f89f608
// *pw : 20000
// ps : 0x16f89f5f4
// *ps : 3
// ps : 0x16f89f5f6
// *ps : 2
// stacks[0] : 3
// stacks[1] : 2
// *stacks : 3
// *(stacks + 1) : 2
// 24
// 6