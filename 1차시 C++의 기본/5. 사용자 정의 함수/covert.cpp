// convert.cpp
#include <iostream>
using namespace std;
int stonetolb(int);
int main(void) {
    int stone;
    cout << "Input your weight with stone : ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << "[Stone] " << stone << endl;
    cout << "[Pound] " << pounds << endl;
    return 0;
}
int stonetolb(int sts) {
    return 14*sts;
}