// pointer.cpp
#include <iostream>
using namespace std;
int main(void){
	int updates = 6;
	int *p_updates;
	p_updates = &updates;

	// *는 포인터를 의미하는데 포인터의 변수는 변수의 주소값을 받아야한다.
	cout << "[Values] updaates = " << updates << endl;
	cout << "[Values] *p_updates = " << *p_updates << endl;

	cout << "[Address] &updates = " << &updates << endl;
	cout << "[Address] p_updates = " << p_updates << endl;

	// *포인터 변수와 포인터 변수의 차이는 *의 값이 붙으면 변수 주소가 아닌 값을 반환한다.
	*p_updates += 1;
	cout << "Now updates = " << updates << endl;
	cout << "Now updates = " << p_updates << endl;
	cout << "Now updates = " << *p_updates << endl;
	
	// 변수에 +1을 해주면, int형이므로 4바이트 큰 메모리에 접근하게되고, 
	// 해당 메모리는 할당한 적이 없으므로 garbage값, 쓰레기 값이 표현된다.
	p_updates += 1;
	cout << "Now updates = " << updates << endl;
	cout << "Now updates = " << p_updates << endl;
	cout << "Now updates = " << *p_updates << endl;
	return 0;
}