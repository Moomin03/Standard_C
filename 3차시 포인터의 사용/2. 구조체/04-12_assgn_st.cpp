// assgn_st.cpp
#include <iostream>
using namespace std;
struct inflatable {
	char name[20];
	float volumne;
	double price;
};
int main(void) {
	inflatable bouquet = {
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquet : " << bouquet.name << endl;
	cout << "boquet price : $" << bouquet.price	<< endl;

	choice = bouquet;
	cout << "choice ; " << choice.name << endl;
	cout << "choice price : $" << choice.price << endl;
	return 0;
}

// 결과
// bouquet : sunflowers
// boquet price : $12.49
// choice ; sunflowers
// choice price : $12.49