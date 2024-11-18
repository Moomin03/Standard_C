// instr1.cpp
#include <iostream>
int main(void) {
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "좋아하는 디저트를 입력하세요 : ";
	cin >> dessert;
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. 조금만 기다려주세요. " << name << "님!" << endl;
	return 0;
}

// 결과
// 이름을 입력하세요 : hongseo
// 좋아하는 디저트를 입력하세요 : candy
// 맛있는 candy 디저트를 준비하겠습니다. 조금만 기다려주세요. hongseo님!