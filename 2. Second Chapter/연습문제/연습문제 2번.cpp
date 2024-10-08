#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double feet, pound;
    cout << "키를 피트 단위로 적어주세요 : ___\b\b\b";
    cin >> feet;
    cout << "체중을 파운드 단위로 적어주세요 : ___\b\b\b";
    cin >> pound;
    double height = feet*12*0.0254;
    double weight = pound*2.2;
    cout << "당신의 BMI 지수는 " << weight / pow(height,2) << "입니다." << endl;
    return 0;
}