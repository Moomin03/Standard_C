//first_example.cpp
#include <iostream>
#include <cmath>
using namespace std;
float *bmi(float weight, float height) {
	float *result = new float;
	*result = weight/pow(height, 2);
	return result;
}
int main(void) {
	float weight = 70.0;
	float height = 173.5;
	float *result = bmi(weight, height);
	cout << *result << endl;
	delete result;
	return 0;
}