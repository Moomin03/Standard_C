// structur.cpp
// 우리가 한명의 농구선수에 대한 정보를 모두 저장해야한다고 하자.
// 많은 정보를 저장하는데 각각에 대해서 배열을 만들수는 없다. 이럴때 구조체를 사용한다.
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main(void) {
	using namespace std;
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

	cout << "지금 판매하고 있는 모형 풍선은 " << endl;
	cout << guest.name << " 와 " << pal.name << "입니다." << endl;
	cout << "두 제품읕 $";
	cout << guest.price + pal.price << "에 드리겠습니다." << endl;
	return 0;
}
// 결과
// 지금 판매하고 있는 모형 풍선은 
// Glorious Gloria 와 Audacious Arthur입니다.
// 두 제품읕 $62.98에 드리겠습니다.