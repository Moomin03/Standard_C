// strcptr.cpp
#include <iostream>
#include <cmath>
using namespace std;
struct polar {
	double distance;
	double angle;
};
struct rect {
	double x;
	double y;
};

void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main(void) {
	rect rplace;
	polar pplace;

	cout << "x값과 y값을 입력하십시오 : ";
	while (cin >> rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) : ";
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}

void show_polar(const polar* pda) {
	const double Rad_to_deg = 57.29577951;
	cout << "거리 = " << pda->distance << endl;
	cout << "각도 = " << pda->angle*Rad_to_deg << "도" << endl;
}
void rect_to_polar(const rect* pxy, polar* pda) {
	pda->distance = sqrt(pxy->x*pxy->x+pxy->y+pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

// 결과
// x값과 y값을 입력하십시오 : 30 60
// 거리 = 31.9374
// 각도 = 63.4349도
// x값과 y값을 입력하십시오(끝내려면 q를 입력) : -100 100
// 거리 = 100.995
// 각도 = 135도
// x값과 y값을 입력하십시오(끝내려면 q를 입력) : q
// 프로그램을 종료합니다.