// 연습문제2.cpp
#include <iostream>
using namespace std;
int read_score(int* arr, int size);
void display_score(int* arr, int size);
double mean_score(int* arr, int size);
const int ArSize = 10;
int main(void) {
	int golf_score[ArSize];
	int limits = read_score(golf_score, ArSize);
	display_score(golf_score, limits);
	cout << "골프 점수의 평균은 : " << mean_score(golf_score, limits) << endl;
	return 0;
}
int read_score(int* arr, int size) {
	int i=0;
	cout << i+1 << "번째 점수를 입력하세요 : ";
	while (cin>>arr[i]) {
		++i;
		cout << i+1 << "번째 점수를 입력하세요 : ";
	}
	return i;
}
void display_score(int* arr, int size) {
	cout << "골프 점수는 : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
double mean_score(int* arr, int size) {
	double total = 0.0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total/size;
}

// 결과
// 1번째 점수를 입력하세요 : 1
// 2번째 점수를 입력하세요 : 2
// 3번째 점수를 입력하세요 : 3
// 4번째 점수를 입력하세요 : 4
// 5번째 점수를 입력하세요 : 5
// 6번째 점수를 입력하세요 : 6
// 7번째 점수를 입력하세요 : q
// 골프 점수는 : 1 2 3 4 5 6 
// 골프 점수의 평균은 : 3.5