#include <iostream>
using namespace std;

int main(void) {
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "숫자를 하나 입력하세요 : ";
    cin >> hats;
    cout << "다른  수를 입력하세요 : ";
    cin >> heads;

    cout << "hats = " << hats << endl;
    cout << "heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}