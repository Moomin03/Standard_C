// inline.cpp
#include <iostream>
using namespace std;
inline double square(double x) {return x*x;}
int main(void) {
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5+7.5);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c;
	cout << ", c의 제곱 = " << square(c) << endl;
	cout << "현재 c = " << c << endl;
	return 0;
}

// 결과
// a = 25, b = 144
// c = 13, c의 제곱 = 169
// 현재 c = 13