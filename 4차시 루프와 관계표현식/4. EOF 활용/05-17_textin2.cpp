// textin2.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch;
	int count = 0;

	cout << "문자열들을 입력하시오; 끝내려면 #을 입력하시오" << endl;
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " 문자를 읽었습니다." << endl;
	return 0;
}

// 결과
// Did you use a #2 pencil?
// Did you use a 
// 14 문자를 읽었습니다.