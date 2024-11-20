// forstr1.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	cout << "단어 하나를 입력하시오 : ";
	string word;
	getline(cin, word);

	for (int i = word.size()-1; i >= 0; i--)
		cout << word[i];
	cout << endl << "종료" << endl;
	return 0;
}

// 결과
// 단어 하나를 입력하시오 : animal
// lamina
// 종료
