#include <iostream>
#include <string>

//#define MAIN7_3
// 네임스페이스

#ifdef MAIN7_3

using namespace std;
//using namespace test1;
//	using test2::print3;

namespace test1 {
	void print() {
		cout << "네임스페이스 테스트 1입니다." << endl;
	}
}
namespace test2 {
	void print() {
		cout << "네임스페이스 테스트 2입니다." << endl;
	}
	void print3() {
		cout << "테스트 3" << endl;
	}
}
// 실습26
namespace seoul{
	string loc_num;
	string landmark;
}
namespace busan {
	string loc_num;
	string landmark;
}
using namespace seoul;

int main() {
	
	loc_num = "02";
	landmark = "한강";

	cout << "서울 지역번호 : " << loc_num << endl;
	cout << "서울 랜드마크 : " << landmark << endl;

	using busan::loc_num;
	using busan::landmark;

	loc_num = "051";
	landmark = "광안리";

	cout << "부산 지역번호 : " << loc_num << endl;
	cout << "부산 랜드마크 : " << landmark << endl;
	
	
	
	
	/*
	print();
	test2::print();
	print3();
	*/


	return 0;
}

#endif