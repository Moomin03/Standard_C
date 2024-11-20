// forstr2.cpp
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	cout << "단어 하나를 입력하십시오 : ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size()-1; j < i; --i, ++j) {
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	// 첫번째 단어와 마지막 단어를 바꾸고, 두번째 단어와 마지막 전 단어를 바꾸고...
	cout << word << endl;
	return 0;
}

// 결과
// 단어 하나를 입력하십시오 : straps
// sparts