// ptrstr.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char animal[20] = "bear";
	// 배열을 할당받아서 저장하겠다는 것이 아니라 메모리에 바로 쓰겠다는 이야기
	const char *bird = "wren"; // 문자형 리터럴
	char *ps;
	// 평범한 변수 출력
	cout << animal << " and ";
	cout << bird << endl;
	// 변수를 입력 받고,
	cout << "Enter a kind of animal : ";
	cin >> animal;
	// 입력 받은 값을 포인터로 할당하고
	ps = animal;
	// 이때 ps의 값은 주소값이지만, C++에서는 ps가 가리키는 주소값의 데이터부터 \0까지의 값을 출력한다.
	cout << ps << "!" << endl;
	cout << "Before using strcpy() : " << endl;
	// 여기서도 animal이 지칭하는 건, a의 주소위치지만 cout는 \0까지의 값을 출력한다.
	// 별도의 형 변환을 사용한 이유는 a의 주소위치를 반환하기 위함이다.
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	// +1을 한 이유는 \0 때문이다.
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy() : " << endl;
	// strcpy를 하고 난 이후에 메모리 주소값이 달라지기 때문에 이 부분을 주목하자.
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
}