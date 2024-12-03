// recur.cpp
#include <iostream>
void countdown(int n);
int main() {
	countdown(4);
	return 0;
}

void countdown(int n) {
	using namespace std;
	cout << "카운트 다운..." << n << endl;
	if (n > 0)
		countdown(n-1);
	cout << n << ": Kaboom!" << endl;
}

// 결과
// 카운트 다운...4
// 카운트 다운...3
// 카운트 다운...2
// 카운트 다운...1
// 카운트 다운...0
// 0: Kaboom!
// 1: Kaboom!
// 2: Kaboom!
// 3: Kaboom!
// 4: Kaboom!