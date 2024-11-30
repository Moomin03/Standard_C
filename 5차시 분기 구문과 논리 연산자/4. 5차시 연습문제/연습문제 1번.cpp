// 연습문제 1번.cpp
#include <iostream>
#include <cctype>
int main(void) {
	using namespace std;
	char ch;
	cin >> ch;
	while (ch!='@') {
		if (islower(ch))
			cout << (char)toupper(ch) << endl;
		else if (isupper(ch))
			cout << (char)tolower(ch) << endl;
		cin >> ch;
	}
	return 0;
}

// 결과
// a
// A
// b
// B
// A
// a
// B
// b
// @