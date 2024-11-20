// while.cpp
#include <iostream>
using namespace std;
const int ArSize = 20;
int main(void) {
	char name[ArSize];

	cout << "영문 이름을 입력하세요 : ";
	cin >> name;
	cout << "귀하의 영문 이름을 한 줄에 한자씩 ";
	cout << "ASCII 코드와 함께 표시하면 이렇습니다." << endl;
	int i = 0;
	while (name[i] != '\0') {
		cout << name[i] << " : " << int(name[i]) << endl;
		i++;
	}
	return 0;
}

// 결과
// M : 77
// u : 117
// f : 102
// f : 102
// y : 121