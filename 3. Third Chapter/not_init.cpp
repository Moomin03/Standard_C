// not_init.cpp
#include <iostream>
using namespace std;
int main(void) {
	int *fellow;
	fellow = 223323;
	cout << "fellow = " << fellow << endl;
	cout << "*fellow = " << *fellow << endl;
	return 0;
}
// 해당 코드는 오류를 발생시킨다. 왜 그럴까?
// 포인터에서의 맹점은 C++에서 포인터를 만들 때, 컴퓨터는 주소에 대한 메모리를 할당하지만,
// 주소에 대한 값에 대한 메모리는 할당하지 않는다.
// 여기서 fellow는 포인터가 맞다. 하지만 fellow에 대해서 접근하지 못하는 이유는 initialize 되지
// 않았기 때문이다.
// 포인터를 사용할 대는 반드시 유효한 메모리 주소를 가리켜야한다. 위의 fellow는 
// 무작위 숫자를 주소로 사용하고 있어서, 유요한 메모리 영역을 참조하지 않는다.
// 그리고 포인터는 정수형 타입이 아니다. 