// textin4.cpp
#include <iostream>
using namespace std;
int main(void) {
	int ch;
	int count = 0;

	while ((ch=cin.get()) != EOF) {
		cout.put(char(ch));
		++count;
	}
	cout << count << " 문자를 읽었습니다." << endl;
	return 0;
}

// 결과
// The sullen mackerel sulks in the shadowy shallows.
// The sullen mackerel sulks in the shadowy shallows.
// Yes, but the blue bird of happiness harbors secrets.
// Yes, but the blue bird of happiness harbors secrets.
// 104 문자를 읽었습니다.

// 추가설명
// 그냥 cin.get()을 사용하면, EOF가 발생했을때 True, False를 반환하지만,
// ch=cin.get()를 사용하면 EOF가 발생했을때 ch의 값이 EOF가 된다.