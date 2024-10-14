#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(void) {
	char char1[20];
	char char2[20]="jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(char1, char2);

	str1 += " paste";
	strcat(char1, "juice");

	int len1 = str1.size();
	int len2 = strlen(char1);

	cout << str1 << " 문자열에는 "
		<< len1 << "개의 문자가 들어있다." << endl;

	cout << char1 << " 문자열에는 "
		<< len2 << "개의 문자가 들어있다." << endl;
	return 0;
}
