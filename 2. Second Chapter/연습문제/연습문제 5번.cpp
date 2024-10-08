#include <iostream>
using namespace std;
int main(void) {
    long long glob, amer;
    cout << "세계 인구수를 입력하시오 : ";
    cin >> glob;
    cout << "미국의 인구수를 입력하시오 : ";
    cin >> amer;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << (double) amer / (double) glob * (double) 100.0 << "%이다." << endl;
    return 0;
}