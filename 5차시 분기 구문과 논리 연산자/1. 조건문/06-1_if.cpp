// if.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch;
	int spaces = 0;
	int total = 0; cin.get(ch);
	while (ch != '.') {
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "이 문장의 총 문자 수는 " << total << "이고, ";
	cout << "그 중에서 빈칸은 " << spaces << "개입니다." << endl;
	return 0;
}

// 결과
// The ballonist was an airheead with lofty goals.
// 이 문장의 총 문자 수는 46이고, 그 중에서 빈칸은 7개입니다.