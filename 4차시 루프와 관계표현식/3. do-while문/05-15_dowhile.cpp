// dowhile.cpp
#include <iostream>
using namespace std;
int main(void) {
	int n;
	cout << "1부터 10까지의 수 중에서 ";
	cout << "내가 좋아하는 수를 한번 맞추어 보십시오." << endl;
	do {
		cin >> n;
	} while (n != 7);
	cout << "맞았습니다. 내가 좋아하는 수는 럭키 세븐 7입니다." << endl;
	return 0;
}

// 결과
// 1부터 10까지의 수 중에서 내가 좋아하는 수를 한번 맞추어 보십시오.
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 맞았습니다. 내가 좋아하는 수는 럭키 세븐 7입니다.

// 추가 설명
// while문과 do-while문의 차이점은 while문은 조건이 성립하지 않으면 한번이라도 실행하지 않을 수 있지만,
// do while은 무조건 한번은 실행된다는 차이가 있다.