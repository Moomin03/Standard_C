#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	
	cout << "고양이과의 동물 한 종을 입력하시요: ";
	cin >> char1;
	cout << "고양이과의 또 다른 동물 한 종을 입력하시요: ";
	cin >> str1;
	cout << "아래 동물은 모두 고양이과입니다." << endl;
	cout << char1 << " " << char2 << " " << str1 << " " << str2 << " " << endl;
	cout << char2 << "에서의 3번째 글자 : " << char2[2] << endl;
	cout << str2 << "에서의 3번째 글자 : " << str2[2] << endl;
	return 0;
}
