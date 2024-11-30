// 연습문제 6번.cpp
#include <iostream>
using namespace std;
struct Contribution {
	char name[20];
	double money;
};
int main(void) {
	int how_many;
	cout << "몇명이 기부했나요? : ";
	cin >> how_many;
	if (how_many!=0) { 
		Contribution* contribute = new Contribution[how_many];
		for (int i = 0; i < how_many; i++) {
			cout << "기부자명 : ";
			cin.ignore();
			cin.getline(contribute[i].name, 20);
			cout << "기부금액 : ";
			cin >> contribute[i].money;
		}
		for (int i = 0; i < how_many; i++) {
			if (contribute[i].money>=10000) {
				cout << "[고액 기부자]" << endl;
				cout << "기부자 이름 : " << contribute[i].name << endl;
				cout << "기부 금액 : " << contribute[i].money << endl;
			}
			else {
				cout << "[소액 기부자]" << endl;
				cout << "기부자 이름 : " << contribute[i].name << endl;
				cout << "기부 금액 : " << contribute[i].money << endl;
			}
		}
		delete [] contribute;
	}
	else
		cout << "기부자가 없습니다." << endl;
	return 0;
}

// 결과
// 몇명이 기부했나요? : 2
// 기부자명 : hongseo
// 기부금액 : 1000
// 기부자명 : hongsei
// 기부금액 : 30000
// [소액 기부자]
// 기부자 이름 : hongseo
// 기부 금액 : 1000
// [고액 기부자]
// 기부자 이름 : hongsei
// 기부 금액 : 30000