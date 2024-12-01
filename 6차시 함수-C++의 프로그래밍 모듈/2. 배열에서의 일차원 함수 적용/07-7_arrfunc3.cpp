// arrfunc3.cpp
#include <iostream>
const int Max = 5;
int fill_array(double* arr, int limit);
void show_array(const double* arr, int n);
void revalue(double r, double* arr,  int n);
using namespace std;

int main(void) {
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size>0) {
		cout << "재평가율을 입력하십시오 : ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get()!='\n')
				continue;
			cout << "잘못 입력했습니다, 수치를 입력하세요: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "프로그램을 종료합니다." << endl;
	cin.get();
	cin.get();
	return 0;
}
int fill_array(double* arr, int limit) {
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << (i+1) << "번째 부동산 가격 : $";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\0')
				continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다." << endl;
			break;
		}
		else if (temp < 0)
			break;
		arr[i] = temp;
	}
	return i;
}
void show_array(const double* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << (i+1) << "번째 부동산 가격 : $";
		cout << arr[i] << endl;
	}
}
void revalue(double r, double* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] *= r;
	}
}

// 결과
// 1번째 부동산 가격 : $100000
// 2번째 부동산 가격 : $80000
// 3번째 부동산 가격 : $222000
// 4번째 부동산 가격 : $240000
// 5번째 부동산 가격 : $118000
// 1번째 부동산 가격 : $100000
// 2번째 부동산 가격 : $80000
// 3번째 부동산 가격 : $222000
// 4번째 부동산 가격 : $240000
// 5번째 부동산 가격 : $118000
// 재평가율을 입력하십시오 : 0.8
// 1번째 부동산 가격 : $80000
// 2번째 부동산 가격 : $64000
// 3번째 부동산 가격 : $177600
// 4번째 부동산 가격 : $192000
// 5번째 부동산 가격 : $94400
// 프로그램을 종료합니다.