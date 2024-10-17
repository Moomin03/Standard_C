#include <iostream>
using namespace std;
struct inflatable {
	char name[20];
	float volume;
	double price;
};
int main(void) {
	// 구조체 포인터를 사용할 때는 ->를 사용해 값에 접근합니다.
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable item : ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet : ";
	// 역참조를 사용해 값에 접근할 수도 있습니다.
	cin >> (*ps).volume;
	cout << "Enter price : $";
	cin >> ps->price;
	cout << "Name : " << (*ps).name << endl;
	cout << "Volume : " << ps->volume << " cubic feet" << endl;
	cout << "Price : $" << ps->price << endl;
	delete ps;
	return 0;
}