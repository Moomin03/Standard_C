// 연습문제 7번.cpp
// 조건 1. 문자열을 문자 배열에 보관, 제작년도를 정수로 보관하는 car 구조체 설계하기

#include <iostream>
#include <string>
using namespace std;
struct car {
	string made_where;
	int made_year;
};
int main(void) {
	int a;
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> a;
	car* new_car = new car[a];
	for (int i = 0; i < a; i++) {
		cout << "자동차 #" << i+1 << endl;
		cout << "제작업체: ";
		cin.ignore();
		getline(cin, new_car[i].made_where);
		cout << "제작년도: ";
		cin >> new_car[i].made_year;
	}
	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
	for (int i = 0; i < a; i++) {
		cout << new_car[i].made_year << "년형 " << new_car[i].made_where << endl;
	}
	delete [] new_car;
	return 0;
}

// 결과
// 몇 대의 차를 목록으로 관리하시겠습니까? 2
// 자동차 #1
// 제작업체: 태극자동차
// 제작년도: 1987
// 자동차 #2
// 제작업체: 무궁화자동차
// 제작년도: 1993
// 현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.
// 1987년형 태극자동차
// 1993년형 무궁화자동차