//arrayone.cpp
#include <iostream>
using namespace std;
int main(void) {
	int yams[3]; // 3개의 원소를 가진 배열을 생성
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {200, 300, 50};

	cout << "[정보] 고구마 판매 리스트" << endl;
	cout << "[합계] 고구마 합계 : ";
	cout << yams[0]+yams[1]+yams[2] << endl;
	cout << "[1번 상품] " << yams[0] << "개가 들어있는 고구마 한개 가격 : " << yamcosts[0] << endl;
	cout << "[2번 상품] " << yams[1] << "개가 들어있는 고구마 한개 가격 : " << yamcosts[1] << endl;
	cout << "[3번 상품] " << yams[2] << "개가 들어있는 고구마 한개 가격 : " << yamcosts[2] << endl;

	cout << "[1번 상품] " << yams[0] << "개가 들어있는 고구마 세트 가격 : " << yams[0]*yamcosts[0] << endl;
	cout << "[2번 상품] " << yams[1] << "개가 들어있는 고구마 세트 가격 : " << yams[1]*yamcosts[1] << endl;
	cout << "[3번 상품] " << yams[2] << "개가 들어있는 고구마 세트 가격 : " << yams[2]*yamcosts[2] << endl;

	int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
	cout << "[모두 구매] 1~3번 상품을 모두 구매하시면 " << total << "원 입니다!" << endl;
	return 0;	
}

// 결과
//[정보] 고구마 판매 리스트
// [합계] 고구마 합계 : 21
// [1번 상품] 7개가 들어있는 고구마 한개 가격 : 200
// [2번 상품] 8개가 들어있는 고구마 한개 가격 : 300
// [3번 상품] 6개가 들어있는 고구마 한개 가격 : 50
// [1번 상품] 7개가 들어있는 고구마 세트 가격 : 1400
// [2번 상품] 8개가 들어있는 고구마 세트 가격 : 2400
// [3번 상품] 6개가 들어있는 고구마 세트 가격 : 300
// [모두 구매] 1~3번 상품을 모두 구매하시면 3856원 입니다!

// 배열은 여러개의 값을 연속적으로 저장할 수 있구나!
// 배열 사용 형식 : typeName arrayName[arraySize];