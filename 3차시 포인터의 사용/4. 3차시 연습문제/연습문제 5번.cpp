// 연습문제 5번.cpp
#include <iostream>
using namespace std;
struct CandyBar {
	char name[20];
	double weight;
	int calorie;
};
int main(void) {
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "상표명 : " << snack.name << endl;
	cout << "중량 : " << snack.weight << endl;
	cout << "칼로리 : " << snack.calorie << endl;

	return 0;
}
// 결과
// 상표명 : Mocha Munch
// 중량 : 2.3
// 칼로리 : 350