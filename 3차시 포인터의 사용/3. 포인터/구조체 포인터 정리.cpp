#include <string>
#include <iostream>
using namespace std;
struct man {
	string name;
	int age;
	double weight;
	double height;
};
int main(void) {
	// 그냥 불러오거나
	man a1 = {
		"hongseo",
		22,
		70.0,
		173.0
	};
	cout << "[고객 이름] " << a1.name << endl;
	cout << "[고객 나이] " << a1.age << endl;
	cout << "[고객 몸무게] " << a1.weight << endl;
	cout << "[고객 키] " << a1.height << endl;

	// 역참조를 하거나
	man *p_a = new man;
	*p_a = a1;
	cout << "[고객 이름] " << (*p_a).name << endl;
	cout << "[고객 나이] " << (*p_a).age << endl;
	cout << "[고객 몸무게] " << p_a->weight << endl;
	cout << "[고객 키] " << p_a->height << endl;
	delete p_a;
}

// 결과
// [고객 이름] hongseo
// [고객 나이] 22
// [고객 몸무게] 70
// [고객 키] 173
// [고객 이름] hongseo
// [고객 나이] 22
// [고객 몸무게] 70
// [고객 키] 173