#include <iostream>
using namespace std;

int main(void) {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    int height_cm;
    float height_m;
    cout << "키를 cm단위로 적어주세요 : ___\b\b\b";
    cin >> height_cm;
    height_m = height_cm/100.0;
    cout << "당신의 키는 " << height_m << "m 입니다." << endl;
    cout << "그리고 이를 cm로 변환하면 " << height_cm << "cm 입니다." << endl;
    return 0;
}