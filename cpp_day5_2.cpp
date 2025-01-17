#include <iostream>
#include <string>

//#define MAIN5_2

#ifdef MAIN5_2

using namespace std;

//구조체 선언은 전역변수에 선언하는것이 일반적이다.
//struct Car { // 구조체 정의
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
	// 실습 20

	Rectangle rect1;

	string input;


	cout << "가로, 세로 길이를 입력하세요. (가로 세로) : ";
	cin >> rect1.width >> rect1.height;
	// 스페이스바 기준으로 나눠짐;; 버퍼 때문에?? 버퍼에 담았다ㅏㄱ 짤랐다가 다음 변수에 집어넣는듯.
	// flush를 이용해서 버퍼를 지우기도 한다.
	int a = 0;

	cin >> a;

	cout << "넓이는 : " << rect1.width * rect1.height;
	cout << endl << a; // a에 또 들어간다...




	//Car c1 = {"KIA", 200, 2, 99.9}; // 밑과 동일하다.
	
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