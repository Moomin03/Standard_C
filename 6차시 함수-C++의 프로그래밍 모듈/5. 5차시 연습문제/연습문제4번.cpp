#include <iostream>
using namespace std;

int factorial(int x);

int main() {
    int a;
    while (cin >> a) {
    	cout << factorial(a) << endl;
    }
    return 0;
}

int factorial(int x) {
    if (x == 0) {
        return 1; 
    } else {
        return x * factorial(x - 1); // 재귀 호출
    }
}

// 결과
// 3
// 6
// 4
// 24
// 5
// 120
// 6
// 720
// 7
// 5040
// 8
// 40320
// 9
// 362880
// 10
// 3628800
