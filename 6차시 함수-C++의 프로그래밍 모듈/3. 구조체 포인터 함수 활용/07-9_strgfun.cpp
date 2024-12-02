// strgfun.cpp
#include <iostream>
using namespace std;
unsigned int c_in_str(const char* str, char ch);
int main(void) {
	char mmm[15] = "minimum";

	char* wail = mmm;

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << mmm << "에는 m이 " << ms << "개 들어있습니다." << endl;
	cout << wail << "에는 u가 " << us << "개 들어있습니다." << endl;
	return 0;
}

unsigned int c_in_str(const char* str, char ch) {
	int count = 0;

	while (*str) {
		if (*str==ch)
			count++;
		str++;
	}
	return count;
}

// 결과
// minimum에는 m이 3개 들어있습니다.
// minimum에는 u가 1개 들어있습니다.