#include <iostream>
using namespace std;

int main(void) {
    cout << "\a암호명 \"화려한 외출\" 작전이 방금 개시되었습니다." << endl;
    cout << "8자리 비밀번호를 입력하십시오 : ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\a입력하신 비밀번호는 " << code << "입니다." << endl;
    cout << "\a비밀번호가 맞습니다. Z3 계획을 진행하십시요!" << endl;
    return 0;
}