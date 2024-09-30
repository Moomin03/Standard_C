// exceed.cpp
#include <iostream>
#include <climits>

int main(void) {
    using namespace std;
    short little_myy = SHRT_MAX;
    unsigned short moomin = little_myy;

    cout << "Little_Myy has $" << little_myy << endl;
    cout << "Moomin has $" << moomin << endl;
    cout << "[Admin] I'll give 1$ each!" << endl;
    little_myy += 1;
    moomin += 1;
    cout << "Now Little_Myy has $" << little_myy << endl;
    cout << "Now Moomin has $" << moomin << endl;
}