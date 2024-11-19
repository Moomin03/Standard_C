#include <iostream>
#include <string>
using namespace std;
char* getname(void);
int main(void) {
	char* name;
	name = getname();
	cout << (int *) name << " : " << name << endl;
	delete [] name;

	name = getname();
	cout << (int *) name << " : " << name << endl;
	delete [] name;
	return 0;
}
char* getname(void) {
	char temp[80];
	cout << "이름을 입력하십시오 : ";
	cin.getline(temp, 80);
	char* pn = new char[strlen(temp)+1];
	strcpy(pn, temp);
	return pn;
}

// 결과
// 이름을 입력하십시오 : Fredeldumpkin
// 0x600002c90000 : Fredeldumpkin
// 이름을 입력하십시오 : Pook
// 0x600002c90000 : Pook