// formore.cpp
#include <iostream>
using namespace std;
const int ArSize = 16;
int main(void) {
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++) {
		factorials[i] = i*factorials[i-1];
	}
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}

// 결과
// 0! = 1
// 1! = 1
// 2! = 2
// 3! = 6
// 4! = 24
// 5! = 120
// 6! = 720
// 7! = 5040
// 8! = 40320
// 9! = 362880
// 10! = 3628800
// 11! = 39916800
// 12! = 479001600
// 13! = 6227020800
// 14! = 87178291200
// 15! = 1307674368000