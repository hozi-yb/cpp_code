#include <iostream>
#include <string>

//#define MAIN7
// 클래스_2

#ifdef MAIN7

using namespace std;

class Cat {
	string name;
	int age;

public:
	Cat(string _name, int _age)
	{
		this->name = _name;
		this->age = _age;
	}

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}
	void setName(string _name)
	{
		this->name = _name;
	}
	void setAge(int _age) {
		this->age = _age;
	}


};
class Rectangle {
private:
	float width;
	float height;

public:
	Rectangle(float _width, float _height)
	{
		this->width = _width;
		this->height = _height;
	}
	void area_print() {
		float area = width * height;
		cout << "넓이는 : " << area << endl;
	}
	float getWidth() {
		return width;
	}
	float getHeight() {
		return height;
	}
	void setWidth(float _width) { // 외부에서 내부에 접근할 수 있다. 메서드를 통해서.
		this->width = _width;
	}
	void setHeight(float _height) {
		this->height = _height;
	}
};

// 리더님꺼
/*
class Rectangle2 {
private:
	float width;
	float height;

public:
	Rectangle2(float _width, float _height)
	{
		this->width = _width;
		this->height = _height;
	}
	void area_print() {
		float area = width * height;
		cout << "넓이는 : " << area << endl;
	}
	float getRect() {
		cout << "가로, 세로 길이를 입력하세요. (가로 세로) : ";
		cin >> width >> height;
	}
	void setWidth(float _width) {
		this->width = _width;
		this->height = _height;
	}
};
// 하여튼 getter setter는 명시적인 것인가?
// 외부에서 class내의 private에 접근할 수 있도록 
// 메서드를 통해서 접근
*/
/*
class Car {
private:
	string name;
	int door;
	int wheel;
	int horn;
protected:
	int door_1 = 4;
	int cyl = 12;
public:
	void setData(string _n, int _d, int _w, int _h)
	{
		name = _n;
		door = _d;
		wheel = _w;
		horn = _h;
	}
	void getName()
	{
		cout << "이 차의 이름은 " << name << "입니다." << endl;
	}
	void getDoor()
	{
		cout << "자동차의 도어는 " << door << "개 입니다." << endl;
	}
	void getwheel()
	{
		cout << "자동차의 바퀴는 " << wheel << "개 입니다." << endl;
	}
	void gethorn()
	{
		cout << "이 차는 경적을 " << horn << "초 간 울립니다." << endl;
	}
};

class Genesis : private Car { // 이렇게 상속
	// private로 상속받을수도 있다.
	// 내부 변수들을 상속받아야 할 떄, private로 받겠지??
	// 위에 메서드를 가져와서 사용할 순 있다.


	// 쓰는 이유??
	// 기존에 쓰는 클래스를 상속받아서
	// 새로운 메서드를 생성해줄 수 있다.
public:
	void set_data() {
		set_data();
	}
	void gen_option()
	{
		cout << "제네시스는 고급 옵션을 장착했슴  " << cyl << "기통" << endl;
	}
};
// 회사에서 이미 만든 클래스를 가져와서
 // 상속해서 사용하는 것이 대부분이기 때문에, 그렇다..

class Test {
private:
	int i;
	int j;

public:
	Test(int _i, int _j) : i(_i), j(_j) // 생성자 초기화
	{ } // 언제쓰냐?? ,,, 잘못들었는데 하여간 많이쓴다. 
};
*/

class Animal { // 실습 25.
private:
	//string feed;
	string move;

protected:
	string name;
	int age;

public:
	void what_animal(string _n, int _a, string _m) {
		name = _n;
		age = _a;
		move = _m;
	}
	void Info() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
	
	void Move() {
		cout << name << "이(가)" << move << "로 이동합니다." << endl;
	}
	void Feed() {
		cout << name << "은(는) 먹이를 먹습니다." << endl;
	}

};

class Cat : public Animal {
public:
	
	Cat(){
		cout << "==고양이 정보==" << endl;
	}

};
class Bird : public Animal {
public:

	Bird() {
		cout << "==새 정보==" << endl;
	}

};



int main()
{
	Animal a1;

	Cat c1;
	c1.what_animal("나비", 3, "네발");
	c1.Info();
	c1.Feed();
	c1.Move();

	Bird b1;
	b1.what_animal("참새", 1, "두 날개");
	b1.Info();
	b1.Feed();
	b1.Move();





	/* 리스트 만들기
	Car c1;
	c1.setData("붕붕", 4, 6, 10);
	c1.getName();
	c1.getDoor();
	c1.getwheel();
	c1.gethorn();

	Genesis gen1;
	gen1.setData("g90", 4, 4, 1);
	gen1.getName();
	gen1.getDoor();
	gen1.getwheel();
	gen1.gethorn();
	gen1.gen_option();
	*/



	/* 실습 24.
	Rectangle rect(1, 2);

	rect.area_print();

	float s_width = 0, s_height = 0;

	cout << "가로, 세로 길이를 입력하세요. (가로 세로) : ";
	cin >> s_width >> s_height;
	rect.setWidth(s_width);
	rect.setHeight(s_height);

	rect.area_print();
	cout << "가로 세로 길이는 : " << rect.getWidth() << " " << rect.getHeight() << endl;
	*/



	/*
	Cat cat1("치즈", 1);

	string str_n = cat1.getName();
	int int_n = cat1.getAge();

	cout << "고양이1 이름은 " << str_n << "입니다."<<endl;
	cout << "고양이1 나이는 " << int_n << "살 입니다." << endl;

	cat1.setName("나비");
	cat1.setAge(3);

	str_n = cat1.getName();
	int_n = cat1.getAge();

	cout << "고양이2 이름은 " << str_n << "입니다." << endl;
	cout << "고양이2 나이는 " << int_n << "살 입니다." << endl;
	*/

	return 0;
}

#endif