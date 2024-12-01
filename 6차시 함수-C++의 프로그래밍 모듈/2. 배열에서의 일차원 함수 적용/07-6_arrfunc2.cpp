// arrfunc2.cpp
#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int* arr, int n);
int main(void) {
	int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};

	cout << cookies << " = 배열주소" << endl;
	cout << "size of cookies : " << sizeof cookies << endl;
	int sum = sum_arr(cookies, ArSize);
	cout << "먹은 과자 수 합계 : " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "처음 세 사람은 과자를 " << sum << "개 먹었습니다." << endl;
	sum = sum_arr(cookies+4, 4);
	cout << "마지막 네 사람이 먹은 과자는 " << sum << "개 입니다." << endl;

	return 0;
}
int sum_arr(int* arr, int n) {
	int total = 0;
	cout << arr << " = arr" << endl;
	cout << "sizeof arr = " << sizeof arr << endl;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

// 결과
// 0x16f357610 = 배열주소
// size of cookies : 32

// 여기서 바이트 수가 다른 이유는 cookies는 배열이고, arr은 변수이기 때문이다.
// 0x16f357610 = arr
// sizeof arr = 8
// 먹은 과자 수 합계 : 36
// 0x16f357610 = arr
// sizeof arr = 8
// 처음 세 사람은 과자를 6개 먹었습니다.
// 0x16f357620 = arr
// sizeof arr = 8
// 마지막 네 사람이 먹은 과자는 26개 입니다.