#include <iostream>
using namespace std;
int main(void) {
	const int ArSize=20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "좋아하는 디저트를 입력하세요 : ";
	cin >> dessert;
	// cin은 개행문자를 기준으로 한 단어만 입력 받는다.
	cout << "맛있는 " << dessert << "를 준비하겠습니다." << endl;
	cout << "조금만 기다려주세요. " << name << "님" << endl;
	return 0;
}
