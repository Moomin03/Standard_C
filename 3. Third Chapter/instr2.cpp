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
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << "님!" << endl;
	return 0;
}
