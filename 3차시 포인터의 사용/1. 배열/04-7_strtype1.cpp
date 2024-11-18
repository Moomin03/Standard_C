// strtype1.cpp
#include <iostream>
#include <string>
int main(void) {
	using namespace std;
	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "고양이과의 동물 한종을 입력하시오 : ";
	cin >> char1;
	cout << "고양이과의 또 다른 동물 한 종을 입력하시오 : ";
	cin >> str1;
	cout << "아래 동물들은 모두 고양이과입니다." << endl;
	cout << char1 << " " << char2 << " ";
	cout << str1 << " " << str2 << endl;
	cout << char2 << "에서 세번째 글자 : " << char2[2] << endl;
	cout << str2 << "에서 세번째 글자 : " << str2[2] << endl;
	return 0;
}

// 결과
// 고양이과의 동물 한종을 입력하시오 : ocelot
// 고양이과의 또 다른 동물 한 종을 입력하시오 : tiger
// 아래 동물들은 모두 고양이과입니다.
// ocelot jaguar tiger panther
// jaguar에서 세번째 글자 : g
// panther에서 세번째 글자 : n

// 추가 설명
// 여러 면에서 string 객체를 문자 배열과 동일한 방식으로 사용할 수 있다.
 // 이 둘의 가장 큰 차이점은 크기 지정의 유무이다. cin >> str1에서 입력 받을 때 자동으로 조절한다.