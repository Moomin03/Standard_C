#include <iostream>
#include <string>
using namespace std;
int main(void) {
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << endl;

	cout << "동물의 종류를 입려하세요 : ";
	cin >> animal;

	ps = animal;
	cout << ps << "s!" << endl;
	cout << "strcpy() 사용 전 : " << endl;
	cout << (int *) animal << " : " << animal << endl;
	cout << (int *) ps << " : " << ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() 사용 후 : " << endl;
	cout << (int *) animal << " : " << animal << endl;
	cout << (int *) ps << " : " << ps << endl;
	delete [] ps;

	return 0;
}
// 결과
// bear and wren
// 동물의 종류를 입려하세요 : fox
// foxs!
// strcpy() 사용 전 : 
// 0x16d02b610 : fox
// 0x16d02b610 : fox
// strcpy() 사용 후 : 
// 0x16d02b610 : fox
// 0x60000130c000 : fox