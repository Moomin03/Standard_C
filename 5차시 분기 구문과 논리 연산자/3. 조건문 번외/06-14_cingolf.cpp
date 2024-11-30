// cingolf.cpp
#include <iostream>
const int Max = 5;
int main(void) {
	using namespace std;
	int golf[Max];
	cout << "골프 점수를 입력하십시오.:";
	cout << "총 " << Max << "라운드 점수를 입력해야합니다." << endl;
	int i = 0;
	for (i = 0; i < Max; i++) {
		cout << "round #" << i+1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "골프 점수를 입력하십시오 : ";
		} 
	}
	double total = 0.0;
	for (int i = 0; i < Max; i++)
		total += golf[i];
	cout << "총 " << Max << "라운드의 평균 점수 = "
	<< total / Max << endl;
	return 0;	
}

// 결과
// 골프 점수를 입력하십시오.:총 5라운드 점수를 입력해야합니다.
// round #1: 88
// round #2: 87
// round #3: must i?
// 골프 점수를 입력하십시오 : 103
// round #4: 94
// round #5: must i?
// 골프 점수를 입력하십시오 : 86
// 총 5라운드의 평균 점수 = 91.6