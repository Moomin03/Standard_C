// textin3.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false) {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << count << " 문자를 읽었습니다." << endl;
	return 0;
}

// 결과
// The green bird sings in the winter.
// The green bird sings in the winter.
// Yes, but the crow flies in the dawn.
// Yes, but the crow flies in the dawn.
// 73 문자를 읽었습니다.