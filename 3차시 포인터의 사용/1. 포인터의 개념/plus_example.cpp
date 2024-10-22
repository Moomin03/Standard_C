// plus_example.cpp
#include <iostream>
using namespace std;
int main(void) {
	// 배열에서 배웠듯, *p_n = &name이 아닌 *p_n = name으로 하는 이유는 
	// name 자체가 첫번째 요소의 주소를 가리키기 때문이다.
	char name[10] = "moomin"; // 9글자 입력 받는다. 마지막 : \0
	char *p_n = name;
	cout << "name : " << name << endl; // moomin
	// 여기서 중요한 부분은 왜 포인터로 형변환을 하는지이다.
	// name 자체가 첫번재 요소의 주소를 가리킨다고 설명했다. C++에서는 첫번째 요소 주소를 반환하지 않고
	// 첫번째 요소부터 \0이 있는 시점까지의 값을 반환하라고 지시한다.
	cout << "name[0] address 1 : " << (void *) name << endl;
	// 그냥 name[0]의 값은 데이터 값이고, 이를 주소 값으로 바꾼 후에 형변환을 시킨다는 의미이다.
	cout << "name[0] address 2 : " << (void *) &name[0] << endl;
	// name+0도 주소값이고 이를 형변환 시켜야한다.
	cout << "name[0] address 3 : " << (void *) (name+0) << endl;
	// 요약하자면 평상시에 여러분이 아는 주소값을 반환하기 위해서 포인터를 사용하더라도
	// C++에서는 그 주소에 있는 값부터 \0까지의 값을 출력한다는 이야기다.
	// 따라서 형변환을 꼭 사용하도록 하자.
	return 0;
}