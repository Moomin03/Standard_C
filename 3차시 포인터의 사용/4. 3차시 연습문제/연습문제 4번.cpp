// 연습문제 3번.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	string first_name;
	string last_name;
	string sum_name;

	cout << "퍼스트 네임(이름)을 입력하시오 : ";
	getline(cin, first_name);
	cout << "라스트 네임(성)을 입력하시오 : ";
	getline(cin, last_name);

	// 두 문자열을 합치기 전에 성을 복사하기
	sum_name = last_name;
	sum_name += ", ";
	sum_name += first_name;
	cout << "하나의 문자열로 만들면 : " << sum_name << endl;
	return 0;
}

// 결과
// 퍼스트 네임(이름)을 입력하시오 : Seong il
// 라스트 네임(성)을 입력하시오 : Yoon
// 하나의 문자열로 만들면 : Yoon, Seong il