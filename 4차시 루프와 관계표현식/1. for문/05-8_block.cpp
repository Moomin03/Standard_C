// block.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "값 5개의 합계와 평균을 구합니다." << endl;
	cout << "값 5개를 입력하십시오" << endl;
	double number;
	double sum = 0.0;
	for (int i = 0; i < 5; i++) {
		cin >> number;
		sum += number;
	}
	cout << "값 5개가 모두 입력되었습니다." << endl;
	cout << "입력한 값 5개의 합계는 " << sum << endl;
	cout << "입력한 값 5개의 평균은 " << sum / 5 << endl;
	return 0;
}

// 결과
// 값 5개의 합계와 평균을 구합니다.
// 값 5개를 입력하십시오
// 1942
// 1948
// 1957
// 1974
// 1980
// 값 5개가 모두 입력되었습니다.
// 입력한 값 5개의 합계는 9801
// 입력한 값 5개의 평균은 1960.2