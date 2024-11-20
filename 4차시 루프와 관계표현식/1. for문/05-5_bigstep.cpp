// bigstep.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "정수 하나를 입력하세요 : ";
	int by;
	cin >> by;
	cout << "갱신 크기 " << by << endl;
	for (int i = 0; i < 100; i += by)
		cout << "갱신된 값들 : " << i << endl;
	return 0;
}

// 결과
// 정수 하나를 입력하세요 : 17
// 갱신 크기 17
// 갱신된 값들 : 0
// 갱신된 값들 : 17
// 갱신된 값들 : 34
// 갱신된 값들 : 51
// 갱신된 값들 : 68
// 갱신된 값들 : 85