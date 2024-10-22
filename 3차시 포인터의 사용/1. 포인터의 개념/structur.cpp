// 구조체란 객체지향언어의 특혜로, 구조체 안에 여러 변수들을 넣을 수 있는데 이를 멤버라고 부른다.
#include <iostream>
using namespace std;
struct inflatable {
	char name[20];
	float volume;
	double price;
};
int main(void) {
	inflatable guest = {
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal = {
		"Audacious Arthur",
		3.12,
		32.99
	};
	cout << "지금 판매하고 있는 모형풍선은" << guest.name << "와 " << pal.name << "입니다." << endl;
	cout << "두 제품을 " << guest.price + pal.price << "에 드리겠습니다!" << endl;
	return 0;
}
