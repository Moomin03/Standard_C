// lotto.cpp
#include <iostream>
long double probability(unsigned number, unsigned picks);
using namespace std;
int main(void) {
	double total, choices;
	cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오 : ";
	while ((cin >> total >> choices) && choices <= total) {
		cout << "당신이 이길 확률은 ";
		cout << probability(total, choices);
		cout << "번 중에서 한번입니다." << endl;
		cout << "다시 두 수를 입력하십시오. (끝내려면 q를 입력: )" << endl; 
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}
long double probability(unsigned number, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = number, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

// 결과
// 전체 수의 개수와 뽑을 수의 개수를 입력하십시오 : 49 6
// 당신이 이길 확률은 1.39838e+07번 중에서 한번입니다.
// 다시 두 수를 입력하십시오. (끝내려면 q를 입력: )
// 51 6
// 당신이 이길 확률은 1.80095e+07번 중에서 한번입니다.
// 다시 두 수를 입력하십시오. (끝내려면 q를 입력: )
// 38 6
// 당신이 이길 확률은 2.76068e+06번 중에서 한번입니다.
// 다시 두 수를 입력하십시오. (끝내려면 q를 입력: )
// q
// 프로그램을 종료합니다.