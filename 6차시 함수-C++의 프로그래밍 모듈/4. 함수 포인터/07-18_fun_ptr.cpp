// fun_ptr.cpp
#include <iostream>
double gildong(int);
double moonsoo(int);
void estimate(int lines, double (*pf)(int));
using namespace std;
int main(void) {
	int code;
	cout << "필요한 코드의 행 수를 입력하십시오 : ";
	cin >> code;
	cout << "홍길동의 시간 예상 : ";
	estimate(code, gildong);
	cout << "박문수의 시간 예상 : ";
	estimate(code, moonsoo);
	return 0;
}
double gildong(int n) {
	return 0.05*n;
}
double moonsoo(int n) {
	return 0.03*n+0.0004*n*n;
}
void estimate(int lines, double (*pf)(int)) {
	cout << lines << "행을 작성하는데 ";
	cout << (*pf)(lines) << "시간이 걸립니다." << endl;
}

// 결과
// 필요한 코드의 행 수를 입력하십시오 : 100
// 홍길동의 시간 예상 : 100행을 작성하는데 5시간이 걸립니다.
// 박문수의 시간 예상 : 100행을 작성하는데 7시간이 걸립니다.