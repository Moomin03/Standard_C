// instr3.cpp

// 설명
// get함수는 개행문자를 읽어서 버리지 않고 입력 큐에 그대로 남겨둔다.
// cin.get(name, ArSize);
// cin.get(dessert, ArSize); // 문제 발생
// 첫 번째 호출이 입력 큐에 개행 문자를 그대로 남겨 두기 때문에 두번째 호출은 그 개행 문자를 첫 문자로 만나게된다.

#include <iostream>
using namespace std;
int main(void) {
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하시오 : ";
	cin.get(name, ArSize).get();
	cout << "좋아하는 디저트를 입력하시오 : ";
	cin.get(dessert, ArSize).get();

	cout << name << "님!" << endl;
	cout << "맛있는 디저트 " << dessert << "를 금방 준비해드릴게요!" << endl;
	return 0;
}

// 결과
// 이름을 입력하시오 : hong seo
// 좋아하는 디저트를 입력하시오 : banilla latte
// hong seo님!
// 맛있는 디저트 banilla latte를 금방 준비해드릴게요!

// 추가 설명
// 1. getline 대신 get을 사용하는 이유는?
//  -> 구버전에는 getline이 없기 때문이다.
