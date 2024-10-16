// 포인터에 대해서 이해가 안되는 부분이 있을 수 있다.
// 변하지 않는것은 포인터는 변수나 배열의 주소값을 받는다는 것이다.
#include <iostream>
using namespace std;
int main(void) {

	int a = 5;
	int *p_a = &a;
	cout << "[single variable a] a : " << a << endl;
	cout << "[single variable a address] a : " << &a << endl;
	cout << "[pointer variable *p_a] *p_a : " << *p_a << endl;
	cout << "[pointer variable *p_a address] *p_a : " << p_a << endl << endl;
	// 위의 예제에서 보면 알겠지만 포인터의 값을 변수의 주소값으로 할당받을 때,
	// *를 붙이면 해당 포인터가 가리키는 값을 가져오고, *를 붙이지 않으면 주소를 가져온다.
	int *array = new int[3];
	array[0]=0;
	array[1]=1;
	array[2]=2;
	cout << "[pointer array *array] array[0] : " << *(array) << endl;
	cout << "[pointer array *array address] array[0] : " << array+0 << endl;
	cout << "[pointer array *array] array[1] : " << *(array+1) << endl;
	cout << "[pointer array *array address] array[1] : " << array+1 << endl;
	cout << "[pointer array *array] array[2] : " << *(array+2) << endl;
	cout << "[pointer array *array address] array[2] : " << array+2 << endl << endl;
	// array가 지칭하는 것은 주소이고, *array가 지칭하는 것은 값이라고 했다.
	// array+0, array+1, array+2는 해당 주소를 순서대로 가리키는 것이고,
	// *(array+0), *(array+1), *(array+2)는 해당 주소의 값을 가리키는 것이다.

	// 다르게 사용할 수 있는 방법은 없을까?
	cout << "[pointer array *array] array[0] : " << array[0] << endl;
	cout << "[pointer array *array address] array[0] : " << &array[0] << endl;
	cout << "[pointer array *array] array[1] : " << array[1] << endl;
	cout << "[pointer array *array address] array[1] : " << &array[1] << endl;
	cout << "[pointer array *array] array[2] : " << array[2] << endl;
	cout << "[pointer array *array address] array[2] : " << &array[2] << endl;
	// array[0]은 주소가 아닌 값에 접근하고 해당 주소는 &를 사용해 반환할 수 있다.


	delete [] array;
	return 0;
}