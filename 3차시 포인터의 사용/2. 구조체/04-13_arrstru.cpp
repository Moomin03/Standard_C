// arrstru.cpp
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main(void) {
	using namespace std;
	inflatable guest[2] = {
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};
	cout << guest[0].name << "와 " << guest[1].name << "의 부피를 합하면 ";
	cout << guest[0].volume + guest[1].volume << "세제곱피트입니다." << endl;
	return 0;
}

// 결과
// Bambi와 Godzilla의 부피를 합하면 2000.5세제곱피트입니다.