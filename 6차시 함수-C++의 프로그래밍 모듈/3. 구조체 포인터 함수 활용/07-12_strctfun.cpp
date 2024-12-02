// strctfun.cpp
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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main(void) {
	rect rplace;
	polar pplace;

	cout << "x값과 y값을 입력하십시오 : ";
	while (cin >> rplace.x >> rplace.y) {
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x값과 y값을 입력하십시오(끝내려면 q를 입력) : ";
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}

polar rect_to_polar(rect xypos) {
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
void show_polar(polar dapos){
	const double Rad_to_deg = 57.29577951;

	cout << "거리 = " << dapos.distance << endl;
	cout << "각도 = " << dapos.angle*Rad_to_deg;
	cout << "도" << endl;
}

// 결과
// x값과 y값을 입력하십시오 : 30 40
// 거리 = 50
// 각도 = 53.1301도
// x값과 y값을 입력하십시오(끝내려면 q를 입력) : -100 100
// 거리 = 141.421
// 각도 = 135도
// x값과 y값을 입력하십시오(끝내려면 q를 입력) : q
// 프로그램을 종료합니다.