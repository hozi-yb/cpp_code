#include <iostream>
#include <string>

//#define MAIN7_3
// ���ӽ����̽�

#ifdef MAIN7_3

using namespace std;
//using namespace test1;
//	using test2::print3;

namespace test1 {
	void print() {
		cout << "���ӽ����̽� �׽�Ʈ 1�Դϴ�." << endl;
	}
}
namespace test2 {
	void print() {
		cout << "���ӽ����̽� �׽�Ʈ 2�Դϴ�." << endl;
	}
	void print3() {
		cout << "�׽�Ʈ 3" << endl;
	}
}
// �ǽ�26
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
	landmark = "�Ѱ�";

	cout << "���� ������ȣ : " << loc_num << endl;
	cout << "���� ���帶ũ : " << landmark << endl;

	using busan::loc_num;
	using busan::landmark;

	loc_num = "051";
	landmark = "���ȸ�";

	cout << "�λ� ������ȣ : " << loc_num << endl;
	cout << "�λ� ���帶ũ : " << landmark << endl;
	
	
	
	
	/*
	print();
	test2::print();
	print3();
	*/


	return 0;
}

#endif