#include <iostream>
using namespace std;

int main(void) {
    // 문자 상수를 나타낼때는 작은 따옴표를 사용
    char ch = 'M';
    int i = ch;
    cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;

    cout << "이 문자에 1을 더해보겠습니다." << endl;
    ch += 1;
    i = ch;
    cout << ch << "의 ASCII 코드는 " << i << "입니다." << endl;

    cout << "cout.put(ch)를 사용하여 char형 변수 ch를 화면에 출력" << endl;
    cout.put(ch);

    cout.put('!');

    cout << endl << "종료" << endl;
    return 0;
}