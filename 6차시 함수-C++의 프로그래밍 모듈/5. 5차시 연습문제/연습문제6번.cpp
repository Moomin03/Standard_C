#include <iostream>
using namespace std;
int Fill_array(double* arr, int size);
void Show_array(double* arr, int size);
void Reverse_array(double* arr, int size);
const int ArSize = 10;
int main(void) {
	double array[ArSize];
	int a = Fill_array(array, ArSize);
	Show_array(array, ArSize);
	Reverse_array(array, ArSize);
}
int Fill_array(double* arr, int size) {
	int i=0;
	while (i < size && cin>>arr[i]) {
		i++;
	}
	return i;
}
void Show_array(double* arr, int size) {
	for (int i=0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Reverse_array(double* arr, int size) {
	for (int i = size-1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// 결과
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 1 2 3 4 5 6 7 8 9 10 
// 10 9 8 7 6 5 4 3 2 1 