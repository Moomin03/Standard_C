// 연습문제3번.cpp
#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void change_volume(box &variable);
void show_value(box &variable);
int main(void) {
	box box1 = {
		"대한민국",
		30.0,
		40.0,
		20.0,
		1.0
	};
	change_volume(box1);
	show_value(box1);

}
void change_volume(box &variable) {
	variable.volume = variable.height*variable.width*variable.length;
}
void show_value(box &variable) {
	cout << "제조 : " << variable.maker << endl;
	cout << "높이 : " << variable.height << endl;
	cout << "가로 : " << variable.width << endl;
	cout << "세로 : " << variable.length << endl;
	cout << "부피 : " << variable.volume << endl;
}

// 결과
// 제조 : 대한민국
// 높이 : 30
// 가로 : 40
// 세로 : 20
// 부피 : 24000