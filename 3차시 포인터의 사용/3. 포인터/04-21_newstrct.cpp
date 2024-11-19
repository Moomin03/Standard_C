#include <iostream>
using namespace std;
struct inflatable {
	char name[20];
	float volume;
	double price;
};
int main(void) {
	inflatable* ps = new inflatable;
	cout << "모형풍선의 이름을 입력하십시오 : ";
	cin.get(ps->name, 20);
	cout << "부피를 세제곱 피트 단위로 입력하십시오 : ";
	cin >> (*ps).volume;
	cout << "가격을 달러 단위로 입력하십시오 : ";
	cin >> ps->price;

	cout << "이름 : " << (*ps).name << endl;
	cout << "부피 : " << ps->volume << " cubic feet" << endl;
	cout << "가격 : $" << ps->price << endl;
	delete ps;

	return 0;
}

// 결과
// 모형풍선의 이름을 입력하십시오 : Fabulous Frodo
// 부피를 세제곱 피트 단위로 입력하십시오 : 1.4
// 가격을 달러 단위로 입력하십시오 : 27.99
// 이름 : Fabulous Frodo
// 부피 : 1.4 cubic feet
// 가격 : $27.99