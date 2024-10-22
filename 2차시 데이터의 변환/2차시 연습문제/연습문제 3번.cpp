#include <iostream>
using namespace std;

int main(void) {
    int dogak, boongak, chogak;
    cout << "위도를 도, 분, 초 단위로 입력하세요:" << endl;
    cout << "먼저 도각을 입력하세요 : ";
    cin >> dogak;
    cout << "다음에, 분각을 입력하세요 : ";
    cin >> boongak;
    cout << "끝으로, 초각을 입력하세요 : ";
    cin >> chogak;
    cout << dogak << "도, " << boongak << "분, " << chogak << "초 = ";
    cout << (double) dogak + double (boongak) / 60.0 + double (chogak) / 60.0 / 60.0 << endl;
    return 0;
}