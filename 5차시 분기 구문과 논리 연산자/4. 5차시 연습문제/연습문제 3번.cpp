// 연습문제 3번.cpp
#include <iostream>
using namespace std;
int main(void) {
	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)" << endl;
	cout << "c) camera		p) pianist" << endl;
	cout << "t) tree		g) game" << endl;
	char ch;
	while (cin >> ch && ch != 'q') {
		switch (ch) {
		case 'c':
			cout << "카메라는 렌즈가 비쌉니다." << endl; break;
		case 'p':
			cout << "피아니스트는 아름다운 하모니를 연주합니다." << endl; break;
		case 't':
			cout << "단풍나무는 잎이 별처럼 생겼습니다." << endl; break;
		case 'g':
			cout << "게임을 너무 많이 하는것은 일상생활에 해를 끼칩니다." << endl; break;
		default:
			cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : ";
		}
	}
}

// 결과
// 다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)
// c) camera		p) pianist
// t) tree	 	    g) game
// f
// c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : a
// c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : t
// 단풍나무는 잎이 별처럼 생겼습니다.
// g
// 게임을 너무 많이 하는것은 일상생활에 해를 끼칩니다.
// p
// 피아니스트는 아름다운 하모니를 연주합니다.
// q