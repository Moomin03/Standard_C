#include <iostream>
using namespace std;
struct inflatable {
	char name[20];
	float volume;
	double price;
};
int main(void) {
	inflatable guest[2] = {
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};
	cout << guest[0].name << "와 " << guest[1].name << "의 부피를 합하면" << endl;
	cout << guest[0].volume + guest[1].volume << " 입니다!" << endl;
	return 0;
}
