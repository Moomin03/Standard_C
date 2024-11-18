// instr2.cpp

// 설명
// getline 함수는 Enter 키에 의해 전달되는 개행 문자를 입력의 끝으로 간주하여 한 행 전체를 읽는다.
// 첫 번째 매개변수는 입력한 행을 저장할 배열의 이름이고, 두번째 매개변수는 한계이다.
// 한계가 20이면 최대 19개의 문자들을 입력받을 수 있다. - 나머지 하나는 널문자를 대비해두는 것이다.

#include <iostream>
using namespace std;
int main(void) {
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "이름을 입력하세요 : ";
	cin.getline(name, ArSize);
	cout << "좋아하는 디저트를 입력하세요 : ";
	cin.getline(dessert, ArSize);
	cout << name << "님!" << endl;
	cout << "맛있는 " << dessert << "를 금방 준비해드릴게요!" << endl;
	return 0;
}

// 결과
// 이름을 입력하세요 : hong seo
// 좋아하는 디저트를 입력하세요 : decaf americano
// hong seo님!
// 맛있는 decaf americano를 금방 준비해드릴게요!