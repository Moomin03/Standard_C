// 연습문제 2번.cpp
// 조건 1. 05-4번을 array 객체와 long double형을 사용해 수정하기
#include <iostream>
#include <string>
using namespace std;
const int ArSize = 16;
int main(void) {
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArSize; i++) {
		factorials[i]  = i*factorials[i-1];
	}
	for (int i = 0; i < ArSize; i++) {
		cout << i << "! : " << factorials[i] << endl;
	}
	return 0;
}

// 결과
// 0! : 1
// 1! : 1
// 2! : 2
// 3! : 6
// 4! : 24
// 5! : 120
// 6! : 720
// 7! : 5040
// 8! : 40320
// 9! : 362880
// 10! : 3.6288e+06
// 11! : 3.99168e+07
// 12! : 4.79002e+08
// 13! : 6.22702e+09
// 14! : 8.71783e+10
// 15! : 1.30767e+12