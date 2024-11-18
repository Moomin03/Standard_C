// strtype4.cpp
#include <iostream>
#include <cstring>
int main(void) {
	using namespace std;
	char char1[20];
	string str1;

	cout << "입력 이전에 char1에 있는 문자열의 길이 : ";
	cout << strlen(char1) << endl;
	cout << "입력 이전에 str1에 있는 문자열의 길이 : ";
	cout << str1.size() << endl;
	cout << "텍스트 한 행을 입력하시오 : ";
	cin.getline(char1, 20);
	cout << "입력한 텍스트 : " << char1 << endl;
	cout << "또 다른 텍스트 한 행을 입력하시오 : ";
	getline(cin, str1);
	cout << "입력한 텍스트 : " << str1 << endl;
	cout <<  "입력 이후에 char1의 문자열 길이 : ";
	cout << strlen(char1) << endl;
	cout << "입력 이후에 str1의 문자열 길이 : ";
	cout << str1.size() << endl;
	return 0;
}

// 결과
// 입력 이전에 char1에 있는 문자열의 길이 : 1
// 입력 이전에 str1에 있는 문자열의 길이 : 0
// 텍스트 한 행을 입력하시오 : peanut butter
// 입력한 텍스트 : peanut butter
// 또 다른 텍스트 한 행을 입력하시오 : blueberry jam
// 입력한 텍스트 : blueberry jam
// 입력 이후에 char1의 문자열 길이 : 13
// 입력 이후에 str1의 문자열 길이 : 13

// 추가 설명
// 입력 이전에 char1에 값이 하나 있는 이유는 널 문자를 가리킨다.