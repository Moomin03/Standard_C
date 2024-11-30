// jump.cpp
#include <iostream>
using namespace std;
const int ArSize = 80;
int main(void) {
	char line[ArSize];
	int spaces = 0;
	cout << "한 행의 텍스트를 입력하십시오 ; ";
	cin.get(line, ArSize);
	cout << "전체 텍스트 : " << line << endl;
	cout << "첫 마침표까지의 텍스트 : ";

	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];
		if (line[i]=='.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n빈칸의 문자는 " << spaces << "개 입니다." << endl;
	return 0;
}