// calling.cpp
#include <iostream>
using namespace std;

void simple();

int main(void) {
	cout << "main()에서 simple() 함수를 호출합니다." << endl;
	simple();
	cout << "main()이 simple() 함수와 종료됩니다." << endl;
	return 0;
}

void simple() {
	cout << "여기는 simple() 함수입니다." << endl;
}