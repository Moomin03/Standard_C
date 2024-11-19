// 연습문제 7번.cpp
#include <iostream>
#include <string>
using namespace std;
struct TCL {
	string name;
	double width;
	double weight;
};
int main(void) {
	TCL pizza;
	cout << "피자 회사의 이름 : ";
	getline(cin, pizza.name);
	cout << "피자의 지름 : ";
	cin >> pizza.width;
	cout << "피자의 중량 : ";
	cin >> pizza.weight;

	cout << "피자 회사의 이름 : " << pizza.name << endl;
	cout << "피자의 지름 : " << pizza.width << endl;
	cout << "피자의 중량 : " << pizza.weight << endl;
	return 0;
}

// 결과
// 피자 회사의 이름 : 도미노피자
// 피자의 지름 : 30
// 피자의 중량 : 300
// 피자 회사의 이름 : 도미노피자
// 피자의 지름 : 30
// 피자의 중량 : 300