#include <iostream>
#include <string>

//#define MAIN5_2

#ifdef MAIN5_2

using namespace std;

//����ü ������ ���������� �����ϴ°��� �Ϲ����̴�.
//struct Car { // ����ü ����
//	string name;
//	int age;
//	int door;
//	float engine_temp[10];
//};

struct Rectangle {
	float width;
	float height;
};

using namespace std;

int main()
{
	// �ǽ� 20

	Rectangle rect1;

	string input;


	cout << "����, ���� ���̸� �Է��ϼ���. (���� ����) : ";
	cin >> rect1.width >> rect1.height;
	// �����̽��� �������� ������;; ���� ������?? ���ۿ� ��Ҵ٤��� ©���ٰ� ���� ������ ����ִµ�.
	// flush�� �̿��ؼ� ���۸� ����⵵ �Ѵ�.
	int a = 0;

	cin >> a;

	cout << "���̴� : " << rect1.width * rect1.height;
	cout << endl << a; // a�� �� ����...




	//Car c1 = {"KIA", 200, 2, 99.9}; // �ذ� �����ϴ�.
	
	/*Car c1;

	c1.name = "KIA";
	c1.age = 2000;
	c1.door = 2;
	c1.engine_temp[0] = 99.9;

	cout << c1.name << endl;
	cout << c1.age << endl;
	cout << c1.door << endl;
	cout << c1.engine_temp[0] << endl;*/


	return 0;
}

#endif