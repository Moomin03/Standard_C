// protos.cpp
#include <iostream>
void cheers(int);
double cube(double x);
int main(void) {
	using namespace std;
	cheers(5);
	cout << "하나의 수를 입력하십시오 : ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "한 변의 길이가 " << side << " 센티미터인 정육면체의 부피는 ";
	cout << volume << " 세제곱센티미터입니다." << endl;
	cheers(cube(2));
	return 0;
}
void cheers(int n) {
	for (int i = 0; i < n; i++)
		std::cout << "Cheers! ";
	std::cout << std::endl;
}
double cube(double x) {
	return x*x*x;
}

// 결과
// Cheers! Cheers! Cheers! Cheers! Cheers! 
// 하나의 수를 입력하십시오 : 5
// 한 변의 길이가 5 센티미터인 정육면체의 부피는 125 세제곱센티미터입니다.
// Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers!