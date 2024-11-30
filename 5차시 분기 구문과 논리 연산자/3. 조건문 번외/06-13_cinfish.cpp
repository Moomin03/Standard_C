// cinfish.cpp
#include <iostream>
using namespace std;
const int Max = 5;
int main(void) {
	double fish[Max];
	cout << "오늘 낚은 물고기의 무게를 입력하십시오.\n";
	cout << "물고기는 최대 " << Max << "마리까지 낚을 수 있습니다." << endl;
	cout << "<입력을 끝내려면 q를 누르십시오.>" << endl;
	cout << "fish #1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]) {
		if (++i < Max)
			cout << "fish #" << i+1 << ": ";
	}
	double total = 0.0;
	for (int j = 0; j < i; j++) {
		total += fish[j];
	}
	if (i==0) {
		cout << "물고기를 한 마리도 낚지 못하셨군요" << endl;
	}
	else {
		cout << "물고기 " << i << "마리의 평균 무게는 " << 
		total / i << "그램입니다." << endl;
	}
	cout<< "프로그램을 종료합니다." << endl;
	return 0;


// 결과
// 오늘 낚은 물고기의 무게를 입력하십시오.
// 물고기는 최대 5마리까지 낚을 수 있습니다.
// <입력을 끝내려면 q를 누르십시오.>
// fish #1: 30
// fish #2: 35
// fish #3: 25
// fish #4: 40
// fish #5: q
// 물고기 4마리의 평균 무게는 32.5그램입니다.