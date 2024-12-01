// twoarg.cpp
#include <iostream>
using namespace std;
void n_chars(char, int);
int main(void) {
	int times;
	char ch;

	cout << "문자를 하나 입력하십시오 : ";
	cin >> ch;
	while (ch != 'q') {
		cout << "정수 하나를 입력하세요 : ";
		cin >> times;
		n_chars(ch, times);
		cout << endl << "계속하려면 다른 문자를 입력하고, "
		"끝내려면 q를 누르십시오 : ";
		cin >> ch;
	}
	cout << "현재 times의 값은 " << times << "입니다." << endl;
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
void n_chars(char c, int n) {
	while (n-- > 0)
		cout << c;
}

// 결과
// 문자를 하나 입력하십시오 : w
// 정수 하나를 입력하세요 : 50
// wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
// 계속하려면 다른 문자를 입력하고, 끝내려면 q를 누르십시오 : a
// 정수 하나를 입력하세요 : 30
// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
// 계속하려면 다른 문자를 입력하고, 끝내려면 q를 누르십시오 : q
// 현재 times의 값은 30입니다.
// 프로그램을 종료합니다.