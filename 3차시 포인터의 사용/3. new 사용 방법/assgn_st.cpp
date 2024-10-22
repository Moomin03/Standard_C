// 구조체의 대입
#include <iostream>
#include <string>
using namespace std;
struct inflatable {
	string name;
	float volume;
	double price;
};
int main(void) {
	inflatable bouquet = {
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquet : " << bouquet.name << " for $" << bouquet.price << endl;
	choice = bouquet;
	cout << "choice : " << choice.name << "for $" << choice.price << endl;
	return 0;
}
