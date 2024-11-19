// 연습문제 3번.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char first_name[20];
	char last_name[10];
	char sum_name[30];

	cout << "퍼스트 네임(이름)을 입력하시오 : ";
	cin.getline(first_name, 20);
	cout << "라스트 네임(성)을 입력하시오 : ";
	cin.getline(last_name, 10);

	// 두 문자열을 합치기 전에 성을 복사하기
	strcpy(sum_name, last_name);
	strcat(sum_name, ", ");
	strcat(sum_name, first_name);
	cout << "하나의 문자열로 만들면 : " << sum_name << endl;
	return 0;
}

// 결과
// 퍼스트 네임(이름)을 입력하시오 : Seong il
// 라스트 네임(성)을 입력하시오 : Yoon
// 하나의 문자열로 만들면 : Yoon, Seong il