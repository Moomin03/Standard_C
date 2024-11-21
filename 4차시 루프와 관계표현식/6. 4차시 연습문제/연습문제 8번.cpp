// 연습문제 8번.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	int a = 5;
	for (int i = a; i > 0; i--) {
		for (int j = i-1; j > 0; j--) {
			cout << ".";
		}
		for (int j = a-i; j >= 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

// 결과
// ....*
// ...**
// ..***
// .****
// *****