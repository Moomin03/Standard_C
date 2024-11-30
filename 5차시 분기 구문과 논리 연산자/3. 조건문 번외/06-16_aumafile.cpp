// sumafile.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main(void) {
	char filename[SIZE];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하시오: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << filename << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) {
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "파일 끝에 도달했습니다." << endl;
	else if (inFile.fail())
		cout << "데이터 불일치로 입력이 종료되었습니다." << endl;
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다." << endl;
	if (count == 0)
		cout << "데이터가 없습니다." << endl;
	else {
		cout << "읽은 항목의 개수 : " << count << endl;
		cout << "합계 : " << sum << endl;
		cout << "평균 : " << sum / count << endl;
	}
	inFile.close();
	return 0;
}

// 결과
// 데이터 파일의 이름을 입력하시오: scores.txt
// 파일 끝에 도달했습니다.
// 읽은 항목의 개수 : 12
// 합계 : 204.5
// 평균 : 17.0417