// 연습문제 4번.cpp
// 조건 1. a의 이자 : 원금의 1%, b의 의자 : 원금의 0.05%, 매년 원금이 추가됨
// 조건 2. 원금이 계속 추가될 때, a의 이자보다 많아질 때를 구하기
#include <iostream>
using namespace std;
int main(void) {
	double a_interest = 100000.0*0.1; // a의 이자
	double b_money = 100000.0; // b의 원금
	double b_interst_ratio = 0.05; // b의 이자
	int count = 0; // 총 횟수
	while (b_money*b_interst_ratio <= a_interest) { // b의 이자가 a의 이자보다 크지 않으면 반복
		b_money += (b_money*b_interst_ratio); // b의 원금은 원금 + 이자
		++count; // 횟수 늘리기
	}
	cout << "[시스템] 안녕하세요! 저는 시점을 구하는 프로그램입니다." << endl;
	cout << "[시스템] A씨의 원금은 10만원, 이자율은 0.1입니다. 매달 1만원씩 벌죠." << endl;
	cout << "[시스템] B씨도 원금은 10만원이지만, 이자율은 0.05%밖에 되지 않습니다." << endl;
	cout << "[시스템] 그 대신, B의 경우 이자를 원금에 더할 수 있네요!" << endl;
	cout << "[시스템] 이렇게 원금을 추가하면서 A씨의 이자를 넘어서는 순간은 ";
	cout << count << "년 후입니다." << endl;
	cout << "[시스템] 너무 오래걸리는 것 같네요." << endl;
	return 0;
}

// 결과
// [시스템] 안녕하세요! 저는 시점을 구하는 프로그램입니다.
// [시스템] A씨의 원금은 10만원, 이자율은 0.1입니다. 매달 1만원씩 벌죠.
// [시스템] B씨도 원금은 10만원이지만, 이자율은 0.05%밖에 되지 않습니다.
// [시스템] 그 대신, B의 경우 이자를 원금에 더할 수 있네요!
// [시스템] 이렇게 원금을 추가하면서 A씨의 이자를 넘어서는 순간은 15년 후입니다.
// [시스템] 너무 오래걸리는 것 같네요.