#include <iostream>
using namespace std;
int main(void) {
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하세요 : ";
	cin.get(name, ArSize).get();
	cout << "좋아하는 디저트를 입력하세요 : ";
	cin.get(dessert, ArSize).get();
	cout << name << "님, " << dessert << "를 금방 만들어 드리겠습니다!" << endl;
	return 0;
}
