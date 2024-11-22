// ifelse.cpp
#include <iostream>
using namespace std;
int main(void) {
	char ch;
	cout << "타이핑하시면, 반복 수행하겠습니다." << endl;
	cin.get(ch);
	while (ch != '.') {
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	cout << endl << "혼란스럽게 해서 죄송합니다." << endl;
	return 0;
}

// 결과
// 타이핑하시면, 반복 수행하겠습니다.
// An ineffable joy suffused me as I behold
// Bo!jofggbcmf!kpz!tvggvtfe!nf!bt!J!cfipme
// the wonders of modern computing.
// uif!xpoefst!pg!npefso!dpnqvujoh
// 혼란스럽게 해서 죄송합니다.