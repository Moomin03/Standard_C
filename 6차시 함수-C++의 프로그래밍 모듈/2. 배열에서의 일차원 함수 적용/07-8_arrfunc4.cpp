// arrfunc4.cpp
#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
int main(void) {
	int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};

	int sum = sum_arr(cookies, cookies+ArSize);
	cout << "먹은 과자 수의 합계 : " << sum << endl;
	sum = sum_arr(cookies, cookies+3);
	cout << "세명이서 먹은 과자 수의 합계는 : " << sum << endl;
	sum = sum_arr(cookies+4, cookies+8);
	cout << "마지막 네명이서 먹은 과자 수의 합계는 : " << sum << endl;
	return 0;
}
int sum_arr(const int* begin, const int* end) {
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++) {
		total += *pt;
	}
	return total;
}

// 결과
// 먹은 과자 수의 합계 : 36
// 세명이서 먹은 과자 수의 합계는 : 6
// 마지막 네명이서 먹은 과자 수의 합계는 : 26