// use_new.cpp
#include <iostream>
using namespace std;
// C에서는 malloc을 통해 포인터를 재할당할 수 있지만, C++에서는 new 오퍼레이터를 제공한다.
// typeName * pointer_name = new typeName; (new 사용 형식)
// new 오퍼레이터는 사실상 새로운 변수를 만들어내는 것과 같은 이치
int main(void) {
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;

	cout << "nights value : " << nights << endl;
	cout << "logation : " << &nights << endl;
	cout << "int value : " << *pt << " location : " << pt << endl;

	double *pd = new double;
	*pd = 10000001.0;
	cout << "double value : " << *pd << " location : " << pd << endl;
	cout << "location of pointer pd : " << &pd << endl;
	cout << "size of pt : " << sizeof(pt) << " size of *pt : " << sizeof(*pt) << endl;
	cout << "size of pd : " << sizeof(pd) << " size of *pd : " << sizeof(*pd) << endl;
	return 0;
}