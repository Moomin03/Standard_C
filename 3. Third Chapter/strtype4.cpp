#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(void) {
	char char1[20];
	string str1;

	cout << "입력 이전의 char의 길이 : " << strlen(char1) << endl;
	cout << "입력 이전의 str의 길이 : " << str1.size() << endl;
	cin.getline(char1, 20);
	cout << "입력한 텍스트 : " << char1 << endl;
	getline(cin, str1);
	cout << "입력한 텍스트 : " << str1 << endl;
	cout << "입력 이후에 char의 길이 : " << strlen(char1) << endl;;
	cout << "입력 이후에 str의 길이 : " << str1.size() << endl;
	return 0;
}
