// strtype.cpp
#include <iostream>
#include <cstring>
int main(void) {
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	cout << "string 객체를 string 객체에 대입할 수 있다  s2 = s1" << endl;
	s2 = s1;
	cout << "s1 : " << s1 << ", s2 : " << s2 << endl;
	cout << "string 객체에 C 스타일 문자열을 대입할 수 있다." << endl;
	cout << "s2 : \"buzzard\"" << endl;
	s2 = "buzzard";
	cout << "s2 = " << s2 << endl;
	cout << "string 객체들을 결합할 수 있다. : s3  = s1 + s2" << endl;
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;
	cout << "string 객체들을 추가할 수 있다." << endl;
	s1 += s2;
	cout << "s1 += s2 --> s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;
	return 0;
}

// 결론
// string 객체를 string 객체에 대입할 수 있다  s2 = s1
// s1 : penguin, s2 : penguin
// string 객체에 C 스타일 문자열을 대입할 수 있다.
// s2 : "buzzard"
// s2 = buzzard
// string 객체들을 결합할 수 있다. : s3  = s1 + s2
// s3 : penguinbuzzard
// string 객체들을 추가할 수 있다.
// s1 += s2 --> s1 = penguinbuzzard
// s2 += " for a day" --> s2 = buzzard for a day

// 추가 설명
// string은 신이야!!