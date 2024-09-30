// getinfo.cpp

#include <iostream>
int main(void) {
    using namespace std;

    int carrots;
    cout << "[Admin] How many carrots do you have? : ";
    cin >> carrots;
    cout << "[Admin] Here are two more!" << endl;
    carrots += 2;
    cout << "[Rabbit] Now I have " << carrots << " carrots!!!!!!!!!" << endl;

    return 0;
}