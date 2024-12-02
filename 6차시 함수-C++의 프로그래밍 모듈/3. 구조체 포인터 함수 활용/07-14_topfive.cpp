// topfive.cpp
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string* sa, int n);
int main(void) {
	string list[SIZE];
	cout << "좋아하는 밤하늘의 광경을 " << SIZE << "개 입력하시오 : ";
	for (int i = 0; i < SIZE; i++) {
		cout << i+1 << " : ";
		getline(cin, list[i]);
	}
	cout << "입력하신 내용은 다음과 같습니다. : ";
	display(list, SIZE);

	return 0;
}
void display(const string* sa, int n) {
	for (int i = 0; i < n; i++)
		cout << i+1 << " : " << sa[i] << endl;
}

// 결과
// 좋아하는 밤하늘의 광경을 5개 입력하시오 : 1 : Orion Nebula
// 2 : M13
// 3 : Saturn
// 4 : Jupiter
// 5 : Moon
// 입력하신 내용은 다음과 같습니다. : 1 : Orion Nebula
// 2 : M13
// 3 : Saturn
// 4 : Jupiter
// 5 : Moon