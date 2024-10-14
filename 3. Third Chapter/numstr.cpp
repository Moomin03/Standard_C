#include <iostream>
using namespace std;
int main(void) {
	cout << "지금 사시는 아파트에 언제 입주하셨나요? : ";
	int year;
	(cin >> year).get();
	cout << "사시는 도시가 어딘가요? : ";
	char address[80];
	cin.getline(address, 80);
	cout << "아파트 입주 년도 : " << year << endl;
	cout << "도시 : " << address << endl;
	cout << "등록이 완료되었습니다." << endl;
	return 0;
}
