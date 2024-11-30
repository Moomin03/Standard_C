// outfile.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main(void) {
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");

	cout << "자동차 메이커와 차종을 입력하시오: ";
	cin.getline(automobile, 50);
	cout << "연식을 입력하시오 : ";
	cin >> year;
	cout << "구입 가격을 입력하시오 : ";
	cin >> a_price;
	d_price = 0.913*a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "메이커와 차종 : " << automobile << endl;
	cout << "연식 : " << year << endl;
	cout << "구입 가격 : " << a_price << endl;
	cout << "현재 가격 : " << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "메이커와 차종 : " << automobile << endl;
	outFile << "연식 : " << year << endl;
	outFile << "구입 가격 : " << a_price << endl;
	outFile << "현재 가격 : " << d_price << endl;

	return 0;
}

// 결과
// 자동차 메이커와 차종을 입력하시오: Flitz Perky
// 연식을 입력하시오 : 2009
// 구입 가격을 입력하시오 : 13500
// 메이커와 차종 : Flitz Perky
// 연식 : 2009
// 구입 가격 : 13500.00
// 현재 가격 : 12325.50