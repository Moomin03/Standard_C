// compstr2.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "루프가 끝난 후에 단어는 " << word << "입니다." << endl;
	return 0;
}

// 결과
// ?ate
// aate
// bate
// cate
// date
// eate
// fate
// gate
// hate
// iate
// jate
// kate
// late
// 루프가 끝난 후에 단어는 mate입니다.