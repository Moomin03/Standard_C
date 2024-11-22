// or.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "이 프로그램은 하드 디스크를 다시 포맷합니다." << endl;
	cout << "하드 디스크에 있는 모든 데이터가 지워집닌다." << endl;
	cout << "계속하시겠습니까? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "당신에게 분명히 경고를 했습니다. \a\a\a" << endl;
	else if (ch == 'n' || ch == 'N')
		cout << "현명한 선택입니다. 프로그램을 종료합니다." << endl;
	else {
		cout << "y나 n을 입력하지 않았습니다." << endl;
		cout << "지시사항을 따를 수 없습니다." << endl;
		cout << "휴지통을 비우고 디스크를 정리하겠습니다." << endl;
	}
	return 0;
}

// 결과
// 이 프로그램은 하드 디스크를 다시 포맷합니다.
// 하드 디스크에 있는 모든 데이터가 지워집닌다.
// 계속하시겠습니까? <y/n> n
// 현명한 선택입니다. 프로그램을 종료합니다.