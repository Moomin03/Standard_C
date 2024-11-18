// numstr.cpp
#include <iostream>
int main(void) {
	using namespace std;
	cout << "지금 사시는 아파트에 언제 입주하셨습니까? : ";
	int year;
	cin >> year;
	cin.get();
	cout << "지금 사시는 도시를 말씀해 주시겠습니까? : ";
	char address[80];
	cin.getline(address, 80);
	cout << "아파트 입주년도 : " << year << endl;
	cout << "도시 : " << address << endl;
	cout << "등록이 완료되었습니다!" << endl;
	return 0;
}

// 결과
// 지금 사시는 아파트에 언제 입주하셨습니까? : 1966
// 지금 사시는 도시를 말씀해 주시겠습니까? : New york
// 아파트 입주년도 : 1966
// 도시 : New york
// 등록이 완료되었습니다!

// 추가 설명
// cin.get()을 사용해주지 않으면 cin >> year에서 개행문자를 남겨놓기 때문에 getline에서 입력 받기 전에 종료된다.