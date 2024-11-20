// equal.cpp
#include <iostream>
using namespace std;
int main(void) {
	int quizscores[10] = {
		20, 20, 20, 20, 20, 19, 20, 18, 20, 20
	};
	cout << "올바른 방법 : " << endl;
	for (int i = 0; quizscores[i]==20; i++)
		cout << i << "번 퀴즈의 점수는 20입니다." << endl;
	return 0;
}

// 결과
// 올바른 방법 : 
// 0번 퀴즈의 점수는 20입니다.
// 1번 퀴즈의 점수는 20입니다.
// 2번 퀴즈의 점수는 20입니다.
// 3번 퀴즈의 점수는 20입니다.
// 4번 퀴즈의 점수는 20입니다.