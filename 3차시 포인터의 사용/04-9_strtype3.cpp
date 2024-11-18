// strtype3.cpp
#include <iostream>
#include <cstring>
int main(void) {
	using namespace std;
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(char1, char2);

	str1 += " paste";
	strcat(char1, "juice");

	int len1 = str1.size();
	int len2 = strlen(char1);

	cout << str1 << " 문자열에는 " << len1 << "의 문자가 들어있다." << endl;
	cout << char1 << "문자열에는 " << len2 << "의 문자가 들어있다." << endl;
	return 0;
}

// 결과
// panther paste 문자열에는 13의 문자가 들어있다.
// jaguarjuice문자열에는 11의 문자가 들어있다.

// 추가 설명
// strcat은 char에 문자열을 더하는 건데, 배열의 크기를 잘 파악해야 오류가 발생하지 않는다.