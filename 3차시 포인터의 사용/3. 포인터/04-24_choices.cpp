#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main(void) {
	// original C, C++
	double a1[4] = {1.2, 2.4, 3.6, 4.8};
	// C++98
	vector<double> a2(4);
	a2[0] = 1.0/3.0;
	a2[1] = 1.0/5.0;
	a2[2] = 1.0/7.0;
	a2[3] = 1.0/9.0;
	// C++11
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4 = a3;

	cout << "a1[2] : " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2] : " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2] : " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2] : " << a4[2] << " at " << &a4[2] << endl;

	return 0;
}

// 결과
// a1[2] : 3.6 at 0x16b5db600
// a2[2] : 0.142857 at 0x600001c3d230
// a3[2] : 1.62 at 0x16b5db5c0
// a4[2] : 1.62 at 0x16b5db5a0