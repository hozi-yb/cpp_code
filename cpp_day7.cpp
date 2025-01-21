#include <iostream>
#include <string>

//#define MAIN7
// Ŭ����_2

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
		cout << "���̴� : " << area << endl;
	}
	float getWidth() {
		return width;
	}
	float getHeight() {
		return height;
	}
	void setWidth(float _width) { // �ܺο��� ���ο� ������ �� �ִ�. �޼��带 ���ؼ�.
		this->width = _width;
	}
	void setHeight(float _height) {
		this->height = _height;
	}
};

// �����Բ�
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
		cout << "���̴� : " << area << endl;
	}
	float getRect() {
		cout << "����, ���� ���̸� �Է��ϼ���. (���� ����) : ";
		cin >> width >> height;
	}
	void setWidth(float _width) {
		this->width = _width;
		this->height = _height;
	}
};
// �Ͽ�ư getter setter�� ������� ���ΰ�?
// �ܺο��� class���� private�� ������ �� �ֵ��� 
// �޼��带 ���ؼ� ����
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
		cout << "�� ���� �̸��� " << name << "�Դϴ�." << endl;
	}
	void getDoor()
	{
		cout << "�ڵ����� ����� " << door << "�� �Դϴ�." << endl;
	}
	void getwheel()
	{
		cout << "�ڵ����� ������ " << wheel << "�� �Դϴ�." << endl;
	}
	void gethorn()
	{
		cout << "�� ���� ������ " << horn << "�� �� �︳�ϴ�." << endl;
	}
};

class Genesis : private Car { // �̷��� ���
	// private�� ��ӹ������� �ִ�.
	// ���� �������� ��ӹ޾ƾ� �� ��, private�� �ް���??
	// ���� �޼��带 �����ͼ� ����� �� �ִ�.


	// ���� ����??
	// ������ ���� Ŭ������ ��ӹ޾Ƽ�
	// ���ο� �޼��带 �������� �� �ִ�.
public:
	void set_data() {
		set_data();
	}
	void gen_option()
	{
		cout << "���׽ý��� ��� �ɼ��� �����߽�  " << cyl << "����" << endl;
	}
};
// ȸ�翡�� �̹� ���� Ŭ������ �����ͼ�
 // ����ؼ� ����ϴ� ���� ��κ��̱� ������, �׷���..

class Test {
private:
	int i;
	int j;

public:
	Test(int _i, int _j) : i(_i), j(_j) // ������ �ʱ�ȭ
	{ } // ��������?? ,,, �߸�����µ� �Ͽ��� ���̾���. 
};
*/

class Animal { // �ǽ� 25.
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
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}
	
	void Move() {
		cout << name << "��(��)" << move << "�� �̵��մϴ�." << endl;
	}
	void Feed() {
		cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
	}

};

class Cat : public Animal {
public:
	
	Cat(){
		cout << "==����� ����==" << endl;
	}

};
class Bird : public Animal {
public:

	Bird() {
		cout << "==�� ����==" << endl;
	}

};



int main()
{
	Animal a1;

	Cat c1;
	c1.what_animal("����", 3, "�׹�");
	c1.Info();
	c1.Feed();
	c1.Move();

	Bird b1;
	b1.what_animal("����", 1, "�� ����");
	b1.Info();
	b1.Feed();
	b1.Move();





	/* ����Ʈ �����
	Car c1;
	c1.setData("�غ�", 4, 6, 10);
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



	/* �ǽ� 24.
	Rectangle rect(1, 2);

	rect.area_print();

	float s_width = 0, s_height = 0;

	cout << "����, ���� ���̸� �Է��ϼ���. (���� ����) : ";
	cin >> s_width >> s_height;
	rect.setWidth(s_width);
	rect.setHeight(s_height);

	rect.area_print();
	cout << "���� ���� ���̴� : " << rect.getWidth() << " " << rect.getHeight() << endl;
	*/



	/*
	Cat cat1("ġ��", 1);

	string str_n = cat1.getName();
	int int_n = cat1.getAge();

	cout << "�����1 �̸��� " << str_n << "�Դϴ�."<<endl;
	cout << "�����1 ���̴� " << int_n << "�� �Դϴ�." << endl;

	cat1.setName("����");
	cat1.setAge(3);

	str_n = cat1.getName();
	int_n = cat1.getAge();

	cout << "�����2 �̸��� " << str_n << "�Դϴ�." << endl;
	cout << "�����2 ���̴� " << int_n << "�� �Դϴ�." << endl;
	*/

	return 0;
}

#endif