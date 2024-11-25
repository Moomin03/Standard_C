// switch.cpp
#include <iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main(void) {
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5) {
		switch (choice) {
			case 1:
				cout << "\a" << endl;
					break;
			case 2:
				report();
					break;
			case 3:
				cout << "사장님은 오늘 회사에 계셨습니다.\n";
					break;
			case 4:
				comfort();
					break;
			default:
				cout << "그것은 선택할 수 없습니다." << endl;
		}
		showmenu();
		cin >> choice;
	}
	cout << "프로그램을 종료합니다!" << endl;
	return 0;
}

void showmenu() {
	cout << "1, 2, 3, 4, 5번 중에서 하나를 선택하십시오:" << endl;
	cout << "1) 경고음\n2) 보고서\n3) 알리바이\n4) 격려사\n5) 종료" << endl;
}

void report() {
	cout << "이번 분기는 경영 실적이 아주 좋습니다." << endl;
	cout << "판매량이 120% 늘어났고, 비용은 35% 줄었습니다." << end;
}

void comfort() {
	cout << "사원들은 당신을 없계 최고의 CEO라고 생각하고 있습니다.\n";
	cout << "이사회도 당신을 업계 최고의 CEO라고 생각합니다." << endl;
}