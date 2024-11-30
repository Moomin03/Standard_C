// 연습문제 4번.cpp
#include <iostream>
using namespace std;
const int strsize = 30;
struct bop {
	char fulllname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
int main(void) {
	bop customer[3] = {
		{"크리스티아누 호날두", "포워드", "CR7", 2},
		{"비니시우스 주니어", "포워드", "Vini", 1},
		{"나초 페르난데스", "수비수", "Chip", 0}
	};

	cout << "Benevolent Order of Soccer Players" << endl;
	cout << "a. 실명으로 열람		b. 포지션으로 열람" << endl;
	cout << "c. Bop 아이디로 열람		d. 회원이 지정한 것으로 열람" << endl;
	cout << "q. 종료" << endl;
	char ch;
	cout << "원하는 것을 선택하십시오: ";
	while (cin >> ch && ch != 'q') {
		switch (ch) {
			case 'a':
				for (int i = 0; i < 3; i++) {
					cout << customer[i].fulllname << endl;
				}
				break;
			case 'b':
				for (int i = 0; i < 3; i++) {
					cout << customer[i].title << endl;
				}
				break;
			case 'c':
				for (int i = 0; i < 3; i++) {
					cout << customer[i].bopname << endl;
				}
				break;
			case 'd':
				for (int i = 0; i < 3; i++) {
					if (customer[i].preference == 2)
						cout << customer[i].bopname << endl;
					else if (customer[i].preference == 1)
						cout << customer[i].title << endl;
					else
						cout << customer[i].fulllname << endl;
				}
				break;
		}
		cout << "원하는 것을 선택하십시오: ";
	}

	return 0;
}

// 결과
// a. 실명으로 열람		b. 포지션으로 열람
// c. Bop 아이디로 열람		d. 회원이 지정한 것으로 열람
// q. 종료
// 원하는 것을 선택하십시오: a
// 크리스티아누 호날두
// 비니시우스 주니어
// 나초 페르난데스
// 원하는 것을 선택하십시오: d
// CR7
// 포워드
// 나초 페르난데스
// 원하는 것을 선택하십시오: q