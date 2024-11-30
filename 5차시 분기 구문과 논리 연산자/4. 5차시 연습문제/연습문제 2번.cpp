// 연습문제 2번.cpp
#include <iostream>
using namespace std;
const int Money = 10;
int main(void) {
	double each_money[Money];
	int i = 0;
	double total = 0.0;
	double mean;
	int count = 0;
	while (i++ < Money && cin >> each_money[i]) {
		total += each_money[i];
	}

	mean = total / Money;
	cout << "평균 : " << mean << endl;
	for (int j = 0; j <= i; j++) {
		if (each_money[j] > mean)
			count++;
	}
	cout << "평균보다 큰 기부금의 개수 : " << count << endl; 
	cout << "프로그램 종료되었습니다." << endl;
	return 0;
}

// 결과
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
// 90
// 100
// 평균 : 55
// 평균보다 큰 기부금의 개수 : 5
// 프로그램 종료되었습니다.