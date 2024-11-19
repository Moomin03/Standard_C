#include <iostream>
using namespace std;
int main(void) {
	int updates = 6;
	int *p_updates;
	p_updates = &updates;

	cout << "updates의 값 : " << updates << endl;
	cout << "p_updates의 값 : " << *p_updates << endl;

	cout << "updates의 주소 : " << &updates << endl;
	cout << "p_updates의 주소 : " << p_updates << endl;

	*p_updates += 1;
	cout << "updates의 값 : " << updates << endl;
	cout << "p_updates의 값 : " << *p_updates << endl;

	return 0;
}

// 결과
// updates의 값 : 6
// p_updates의 값 : 6
// updates의 주소 : 0x16bb6f628
// p_updates의 주소 : 0x16bb6f628
// updates의 값 : 7
// p_updates의 값 : 7