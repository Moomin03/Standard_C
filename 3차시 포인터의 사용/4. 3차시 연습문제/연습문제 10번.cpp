// 연습문제 10번
#include <iostream>
#include <array>
using namespace std;
int main(void) {
	array<double, 3> run;
	int count = 0;
	double hap = 0;
	for (int i = 0 ; i < 3 ; i++) {
		cout << i+1 << "번째 기록을 입력하세요! : ";
		cin >> run[i];
		hap += run[i];
		count += 1;
	}
	cout << "총 횟수 : " << count << endl;
	cout << "평균 : " << hap/count << endl;
	return 0;
}

// 결과
// 1번째 기록을 입력하세요! : 9
// 2번째 기록을 입력하세요! : 8.7
// 3번째 기록을 입력하세요! : 9.8
// 총 횟수 : 3
// 평균 : 9.16667