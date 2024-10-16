// addpntrs.cpp
#include <iostream>
using namespace std;
int main(void) {
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};
	double *pw = wages;
	short *ps = &stacks[0];

	cout << "pw = " << pw << endl;
	cout << "*pw = " << *pw << endl;
	pw+=1;
	cout << "pw = " << pw << endl;
	cout << "*pw = " << *pw << endl;
	pw+=1;
	cout << "pw = " << pw << endl;
	cout << "*pw = " << *pw << endl;
	cout << "stacks[0] = " << stacks[0] << endl;
	cout << "stacks[1] = " << *(stacks+1) << endl;
	return 0; 
}