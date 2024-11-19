#include <iostream>
using namespace std;
int main(void) {
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "nights의 값 : " << nights << endl;
	cout << nights << "의 메모리 위치 : " << &nights << endl;

	cout << "pt의 값 : " << *pt << endl;
	cout << "pt의 메모리 위치 : " << pt << endl;

	*pt += 10;

	cout << "nights의 값 : " << nights << endl;
	cout << nights << "의 메모리 위치 : " << &nights << endl;

	cout << "pt의 값 : " << *pt << endl;
	cout << "pt의 메모리 위치 : " << pt << endl;

	double* pd = new double;
	*pd = 10000001.0;

	cout << "pd의 값 : " << *pd << endl;
	cout << "pd의 메모리 위치 : " << pd << endl;

	cout << "pt의 크기 : " << sizeof(*pt) << endl;
	cout << "pd의 크기 : " << sizeof(*pd) << endl;

	return 0;
}

// 결과
// nights의 값 : 1001 
// 1001의 메모리 위치 : 0x16fa17628
// pt의 값 : 1001
// pt의 메모리 위치 : 0x600001a48030
// nights의 값 : 1001
// 1001의 메모리 위치 : 0x16fa17628
// pt의 값 : 1011
// pt의 메모리 위치 : 0x600001a48030
// pd의 값 : 1e+07
// pd의 메모리 위치 : 0x600001a48040
// pt의 크기 : 4
// pd의 크기 : 8

// 추가 설명
// - 동적할당을 사용하는 이유?
// -> 메모리를 힙 영역에서 동적으로 할당하고 해제하는 것. 필요에 따라 메모리를 늘리거나 줄일 수 있는 방식
// |---구분--|-----정적 할당--|---동적 할당--|
// -------------------------------------
// |-할당시점-|컴파일 시점------|실행 시점----|
// |메모리 영역|----스택 영역---|힙 영역------|
// |크기 변경|-------불가능----|----가능----|
// |---수명-|함수 종료시 자동헤제|명시적으로 해제|




