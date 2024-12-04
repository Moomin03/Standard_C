// swaps.cpp
#include <iostream>
using namespace std;

void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swapv(int a, int b);
int main(void) {
	int wallet1 = 3000;
	int wallet2 = 3500;

	cout << "wallet1 : " << wallet1 << endl;
	cout << "wallet2 : " << wallet2 << endl;

	cout << "참조를 통한 교환" << endl;
	swapr(wallet1, wallet2);
	cout << "wallet1 : " << wallet1 << endl;
	cout << "wallet2 : " << wallet2 << endl;

	cout << "포인터를 이용한 교환" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1 : " << wallet1 << endl;
	cout << "wallet2 : " << wallet2 << endl;

	cout << "값으로 전달하여 내용 교환" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1 : " << wallet1 << endl;
	cout << "wallet2 : " << wallet2 << endl;

	return 0;
}
void swapr(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swapv(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

// 결과
// wallet1 : 3000
// wallet2 : 3500
// 참조를 통한 교환
// wallet1 : 3500
// wallet2 : 3000
// 포인터를 이용한 교환
// wallet1 : 3000
// wallet2 : 3500
// 값으로 전달하여 내용 교환
// wallet1 : 3000
// wallet2 : 3500