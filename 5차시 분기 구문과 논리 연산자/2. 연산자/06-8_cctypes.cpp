// cctypes.cpp
#include <iostream>
#include <cctype>
int main(void) {
	using namespace std;
	cout << "분석할 텍스트를 입력하십시오. " << "입력의 끝을 @으로 표시하십시오." << endl;
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@') {
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << "알파벳 문자 " << chars << ", " 
	<< "화이트 스페이스 " << whitespace << ", "
	<< "숫자 " << digits << ", " << "구두점 " << punct << ", "
	<< "기타 " << others << endl;
	return 0;
}

// 결과
// 분석할 텍스트를 입력하십시오. 입력의 끝을 @으로 표시하십시오.
// Adrenalvision nternational producer Adrienne Vismonger
// announced production of their new 3-D film, a reamke of
// "My Dinner with Andre, " scheduled for 2013. "Wait until
// you see the new scene with enraged Collossipede!" @
// 알파벳 문자 171, 화이트 스페이스 33, 숫자 5, 구두점 9, 기타 0