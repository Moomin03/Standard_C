// strings.cpp

// [기초 설명]
// 모든 문자열의 마지막 문자가 반드시 널 문자여야한다.
// char dog[8] = {'b', 'e', 'a', 'u', 'x', '', 'I', 'I'} -> 문자열 아님
// char dog[8] = {'b', 'e', 'a', 'u', 'x', '', 'I', '\0'} -> 문자열 맞음
// char bird[11] = "Mr. Cheeps" -> 큰따옴표로 묶인 문자열은 널 문자를 암시적으로 가지고 있음.

#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 실례하지만 성함이 어떻게 되시나요?" << endl;
	cin >> name1;
	cout << "아, " << name1 << " 씨! 당신의 이름은 ";
	cout << strlen(name1) << "자이고, " << sizeof(name1) << 
	"바이트 크기의 배열에 저장되었습니다." << endl;
	cout << "당신의 이름은 " << name1[0] << "으로 시작하는군요!" << endl;
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다." << endl;
	cout << name2 << endl;
	cout << "만나서 반가웠습니다." << endl;
	return 0;
}

// 결과
// 안녕하세요! 저는 C++owboy입니다! 실례하지만 성함이 어떻게 되시나요?
// hongseo
// 아, hongseo 씨! 당신의 이름은 7자이고, 15바이트 크기의 배열에 저장되었습니다.
// 당신의 이름은 h으로 시작하는군요!
// 제 이름의 처음 세 문자는 다음과 같습니다.
// C++
// 만나서 반가웠습니다.

// 설명
// 반드시 널문자를 포함한다고 했는데, strlen함수를 보면 hongseo에 대해 8자가 아닌 7자라고 표현하고 있다.
// 그에 따라 우리가 처음 공간을 할당하는 값은 문자열의 개수+1이 되여야합니다.