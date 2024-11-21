// nested.cpp
#include <iostream>
using namespace std;
const int Cities = 5;
const int Years = 4;
int main(void) {
	const char* cities[Cities] = {
		"Seoul",
		"Jeju",
		"Busan",
		"Gongju",
		"Daegu"
	};

	int maxtemps[Years][Cities] = {
		{35, 32, 33, 36, 35},
		{33, 32, 34, 35, 31},
		{33, 34, 32, 35, 34},
		{36, 35, 34, 37, 35}
	};

	cout << "2009년부터 2012년까지의 연중 최고온도" << endl << endl;
	for (int city = 0; city < Cities; ++city) {
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year) {
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}

// 결과
// Seoul:	35	33	33	36	
// Jeju:	32	32	34	35	
// Busan:	33	34	32	34	
// Gongju:	36	35	35	37	
// Daegu:	35	31	34	35