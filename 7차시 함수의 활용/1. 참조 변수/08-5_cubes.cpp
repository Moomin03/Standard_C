// cubes.cpp
#include <iostream>
double cube(double a);
double refcube(double &ra);
using namespace std;
int main(void) {
	double x = 3.0;

	cout << cube(x);
	cout << " = " << x << "의 세제곱" << endl;
	cout << refcube(x);
	cout << " = " << x << "의 세제곱" << endl;
	return 0;	
}
double cube(double a) {
	a *= a*a;
	return a;
}
double refcube(double &ra) {
	ra *= ra*ra;
	return ra;
}

// 결과
// 27 = 3의 세제곱
// 27 = 27의 세제곱
