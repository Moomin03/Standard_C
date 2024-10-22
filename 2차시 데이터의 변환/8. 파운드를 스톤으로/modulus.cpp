#include <iostream>
using namespace std;

int main(void) {
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "당신의 체중을 파운드 단위로 입력하세요 : ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs%Lbs_per_stn;
    cout << lbs << "파운드는 " << stone
    << "스톤, " << pounds << "파운드입니다." << endl;
    return 0;
}