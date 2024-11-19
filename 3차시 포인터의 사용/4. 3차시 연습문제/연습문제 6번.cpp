// 연습문제 6번.cpp
#include <iostream>
using namespace std;
struct CandyBar {
	char name[20];
	double weight;
	int calorie;
};
int main(void) {
	CandyBar snacks[2] = {
		{"Mocha Munch", 2.3, 350},
		{"Haribo", 1.0, 200}
	};
	cout << "상표명 : " << snacks[0].name << endl;
	cout << "중량 : " << snacks[0].weight << endl;
	cout << "칼로리 : " << snacks[0].calorie << endl << endl;

	cout << "상표명 : " << snacks[1].name << endl;
	cout << "중량 : " << snacks[1].weight << endl;
	cout << "칼로리 : " << snacks[1].calorie << endl;

	return 0;
}
// 결과
// 상표명 : Mocha Munch
// 중량 : 2.3
// 칼로리 : 350

// 상표명 : Haribo
// 중량 : 1
// 칼로리 : 200