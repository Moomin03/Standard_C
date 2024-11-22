// and.cpp
#include <iostream>
const int ArSize = 6;
int main(void) {
	using namespace std;
	float naaq[ArSize];
	cout << "동료들의 뉴에이지 자각 지수 (NAAQ)를 입력하십시오.\n" 
	<< ArSize << "명의 데이터를 모두 입력했거나, 음수를 입력하시면\n"
	<< "while문을 탈출합니다." << endl;

	int i = 0;
	float temp;
	cout << "첫 번째 값 : ";
	cin >> temp;
	while (i < ArSize && temp >= 0) {
		naaq[i] = temp;
		++i;
		if (i < ArSize) {
			cout << "그 다음 값 : ";
			cin >> temp;
		}
	}
	if (i==0) {
		cout << "입력한 데이터가 없으므로 프로그램을 종료합니다." << endl;
	}
	else {
		cout << "당신의 NAAQ를 입력하십시오 : ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++) {
			if (naaq[j] > you)
				++count;
		}
		cout << "동료들 중에서 " << count << "명이 당신보다 NAAQ가 높습니다." << endl;
	}
	return 0;
}

// 결과
// 동료들의 뉴에이지 자각 지수 (NAAQ)를 입력하십시오.
// 6명의 데이터를 모두 입력했거나, 음수를 입력하시면
// while문을 탈출합니다.
// 첫 번째 값 : 28
// 그 다음 값 : 72
// 그 다음 값 : 15
// 그 다음 값 : 6
// 그 다음 값 : 139
// 그 다음 값 : 145
// 당신의 NAAQ를 입력하십시오 : 50
// 동료들 중에서 3명이 당신보다 NAAQ가 높습니다.