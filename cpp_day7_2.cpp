#include <iostream>
#include <string>

//#define MAIN7_2
// Ŭ����_2

#ifdef MAIN7_2

using namespace std;

class Animal { // �ǽ� 25.
private:
	string move;
	string name;
	int age;

public:
	void what_animal() {
		cin >> name >> age;
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}

	void Move(string _move) {
		cout << name << "��(��) " << _move << "�� �̵��մϴ�." << endl;
	}
	void Feed() {
		cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
	}

};

class Cat : public Animal {
private:
	string move;
public:

	Cat() {
		cout << "==����� ����==" << endl;
		cout << "������� �̸��� ���̸� �Է��Ͻÿ�. : ";
	}
	void c_move() {
		move = "�� ��";
		Move(move);
	}


};
class Bird : public Animal {
private:
	string move;
public:

	Bird() {
		cout << "==�� ����==" << endl;
		cout << "���� �̸��� ���̸� �Է��Ͻÿ�. : ";
	}
	void b_move() {
		move = "�� ����";
		Move(move);
	}

};

class Character {
private:
	string name;
	int level;
	int item_num;

public:
	Character() // ĳ���� ����
	{
		cout << "�̸��� �Է����ּ��� : ";
		cin >> name;
		cout << name << " ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
		level = 0;
		item_num = 0;
	}
	void info() { // ������ ���� �Է�
		cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) ";	
	}
	void new_name() { // �� �̸� �Է�
		cout << "�� �̸��� �Է����ּ��� : ";
		cin >> name;
		cout << "�̸��� ����Ǿ����ϴ�." << endl;
		cout << "new name : " << name << endl;
		level = 0;
		item_num = 0;
	}
	void level_up() { // ���� ��
		level++;
		cout << "������!" << endl;
		cout << "���� ���� : " << level << endl;
	}
	void item_up() { // ������ ��
		item_num++;
		cout << "�������� ������ϴ�!" << endl;
		cout << "���� ������ ���� : " << item_num << endl;
	}
	void item_down() { // ������ �ٿ�
		item_num--;
		cout << "�������� ����߽��ϴ�!" << endl;
		cout << "���� ������ ���� : " << item_num << endl;
	}
	void user_info() { // ���� ����
		cout << "�̸� : " << name << endl;
		cout << "���� : " << level << endl;
		cout << "���� ������ ���� : " << item_num << endl;
	}
	~Character() { // �Ҹ���.
		cout << "���� ����...";
	}
};



int main()
{
	Character ch1;
	int switch_num = 10;
	int flag = 1;

	while (flag) {
	ch1.info();
	cin >> switch_num;
	switch (switch_num) {
		case 0:
			flag = 0;
			break;
		case 1:
			ch1.new_name();
			break;
		case 2:
			ch1.level_up();
			break;
		case 3:
			ch1.item_up();
			break;
		case 4:
			ch1.item_down();
			break;
		case 5:
			ch1.user_info();
			break;
		default:
			cout << "�߸����Է��Դϴ�."<<endl;
	}	}


	// �ǽ� 25
	/*Cat c1;
	c1.what_animal();
	c1.Feed();
	c1.c_move();

	Bird b1;
	b1.what_animal();
	b1.Feed();
	b1.b_move();*/
	

	return 0;
}
#endif