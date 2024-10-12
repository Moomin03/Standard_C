#include <iostream>
using namespace std;
int main(void) {
	int yums[3];
	yums[0]=1;
	yums[1]=2;
	yums[2]=3;
	int yumcosts[3] = {20, 10, 30};
	cout << "Total yums is " << yums[0]+yums[1]+yums[2] << endl;
	cout << "Total expense is " <<
		yums[0]*yumcosts[0]+yums[1]*yumcosts[1]+yums[2]*yumcosts[2] <<
		endl;
	return 0;
}
