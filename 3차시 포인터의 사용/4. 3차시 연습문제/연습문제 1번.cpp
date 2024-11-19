// 연습문제 1번.cpp
// 조건 1. 두 단어 이상의 영문 이름을 받아들여한다.
// 조건 2. 사용자가 원하는 학점을 한 단계씩 하향 조정하여 출력한다.

#include <iostream>
#include <cstring>
using namespace std;
struct inform {
	char first_name[30];
	char last_name[10];
	char want[1];
	int age;
};
int main(void) {
	inform* student1 = new inform;
	cout << "영문 퍼스트 네임(이름) : ";
	cin.getline(student1->first_name, 30);
	cout << "영문 라스트 네임(성) : ";
	cin >> (*student1).last_name;
	cout << "학생이 원하는 학점 ; ";
	cin >> (*student1).want;
	cout << "나이 : ";
	cin >> (*student1).age;

	cout << "성명: " << student1->last_name << ", " << student1->first_name << endl;
	if (strcmp(student1->want, "A")==0) {
		cout << "학점 : " << "B" << endl;
	}
	else if (strcmp(student1->want, "B")==0) {
		cout << "학점 : " << "C" << endl;
	}
	else if (strcmp(student1->want, "C")==0) {
		cout << "학점 : " << "C" << endl;
	}
	cout << "나이 : " << student1->age << endl;

	return 0;
}

// 결과
// 영문 퍼스트 네임(이름) : Seong il
// 영문 라스트 네임(성) : Yoon
// 학생이 원하는 학점 ; B
// 나이 : 22
// 성명: Yoon, Seong il
// 학점 : C
// 나이 : 22
