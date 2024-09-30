// ourfun.cpp
#include <iostream>

void simon(int);
int main(void) {
    simon(3);
    using namespace std;
    cout << "Choose one integer : ";
    int count;
    cin >> count;
    simon(count);
    cout << "END" << endl;
    return 0;
}

void simon(int n) {
    using namespace std;
    cout << "Simonn saind, touch your finger " << n << " times!" << endl;
}

