// 연습문제 6번.cpp
#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar {
	char name[20];
	double weight;
	int calorie;
};
int main(void) {
	CandyBar *snacks = new CandyBar;
	strcpy(snacks->name, "Mocha Munch");
	snacks->weight = 2.3;
	snacks->calorie = 350;

	cout << "이름 : " << snacks->name << endl;
	cout << "중량 : " << snacks->weight << endl;
	cout << "칼로리 : " << snacks->calorie << endl;
	delete snacks;

	return 0;


// 결과
// 이름 : Mocha Munch
// 중량 : 2.3
// 칼로리 : 350