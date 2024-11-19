// 연습문제 8번
#include <iostream>
#include <string>
using namespace std;
struct TCL {
	string name;
	double width;
	double weight;
};
int main(void) {
	TCL *pizza = new TCL;
	cout << "피자의 지름 : ";
	cin >> pizza->width;
	cin.ignore();
	cout << "피자 회사의 이름 : ";
	getline(cin, pizza->name);
	cout << "피자의 중량 : ";
	cin >> pizza->weight;

	cout << "피자 회사의 이름 : " << pizza->name << endl;
	cout << "피자의 지름 : " << pizza->width << endl;
	cout << "피자의 중량 : " << pizza->weight << endl;
	delete pizza;
	return 0;
}

// 결론
// 피자 회사의 이름 : domino pizza
// 피자의 지름 : 30
// 피자의 중량 : 30

// 추가 설명
// cin >> pizza->width 이후에 getline(cin, pizza->name)을 사용하면 입력 버퍼에 남아있는 개행문자가
// getline 함수에 읽혀서 pizza->name에 빈 문자열이 저장될 수 있으므로 cin.ignore()로 개행문자 제거!