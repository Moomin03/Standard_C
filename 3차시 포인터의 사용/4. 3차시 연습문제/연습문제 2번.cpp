// 연습문제 2번.cpp
// 조건 1. string을 사용해서 Listing 4.4를 다시 작성
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string name;
	string dessert;
	cout << "이름을 입력하시오 : ";
	getline(cin, name);
	cout << "좋아하는 디저트를 입력하시오 : ";
	getline(cin, dessert);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!" << endl;
	return 0;
}

// 결과
// 이름을 입력하시오 : Dirk Hammernose
// 좋아하는 디저트를 입력하시오 : Radish Torte
// 맛있는 Radish Torte 디저트를 준비하겠습니다. Dirk Hammernose 님!