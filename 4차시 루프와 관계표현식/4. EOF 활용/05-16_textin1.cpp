// textin1.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch;
	int count = 0;
	cout << "문자열을 입력하시오. 끝내려면 #을 입력하시오." << endl;
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << "문자를 읽었습니다." << endl;
	return 0;
}