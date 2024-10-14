#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string s1 = "penguin";
	string s2, s3;
	cout << "string 객체를 string 객체에 대입할 수 있다. : s1 = s2" << endl;
	s2 = s1;
	cout << "s1 : " << s1 << ", s2 : " << s2 << endl;
	cout << "string 객체에 C 스타일 문자열을 대입할 수 있다." << endl;
	cout << "s2 = \"buzzard\"" << endl;
	s2 = "buzzard";
	cout << "s2 : " << s2 << endl;
	cout << "string 객체들을 결합할 수 있다 : s3 = s1 + ss2" << endl;
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;;
	cout << "string 객체들을 추가할 수 있다." << endl;
	s1 += s2;
	cout << "s1 += s2 --> s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \"for a day\" --> se = " << s2 << endl;
	return 0;
}
