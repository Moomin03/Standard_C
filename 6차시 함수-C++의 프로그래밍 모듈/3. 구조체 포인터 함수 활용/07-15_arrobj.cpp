// arrobj.cpp
#include <iostream>
#include <array>
#include <string>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Sname = {"Spring", "Summer", "Fall", "Winter"};
void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);

int main(void) {
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(array<double, Seasons> *pa) {
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << "에 소요되는 비용:";
		cin >> (*pa)[i];
	}
}
void show(array<double, Seasons> da) {
	double total = 0.0;
	cout << endl << "계절별 비용" << endl;
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << da[i] << endl;
		total += da[i];
	}
	cout << "총 비용 : $" << total << endl;
}

// 결과
// Spring에 소요되는 비용:212
// Summer에 소요되는 비용:256
// Fall에 소요되는 비용:208
// Winter에 소요되는 비용:244

// 계절별 비용
// Spring : $212
// Summer : $256
// Fall : $208
// Winter : $244
// 총 비용 : $920