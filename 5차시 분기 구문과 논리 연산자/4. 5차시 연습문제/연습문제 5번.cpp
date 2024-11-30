// 연습문제 5번.cpp
#include <iostream>
using namespace std;
int main(void) {
	int money = 0;
	double tax = 0.0;
	if (money >= 0 && cin >> money){
		if (money-5000 > 0){
			money -= 5000;
			tax += (5000*0.0);
		}
		else {
			tax += (money*0.0);
		}
		
		if (money-10000 > 0){
			money -= 10000;
			tax += (10000*0.1);
		}
		else {
			tax += (money*0.1);
		}
		
		if (money-20000 > 0){
			money -= 20000;
			tax += (20000*0.15);
		}
		else {
			tax += (money*0.15);
		}
		tax += (money*0.2);
		cout << "세금은 : " << tax << "입니다." << endl;
	}
	else {
		cout << "잘못된 값입니다." << endl;
	}
	return 0;
}

// 결과
// 38000
// 세금은 : 4600입니다.