#include <iostream>
#include <string>

//#define MAIN7_2
// 클래스_2

#ifdef MAIN7_2

using namespace std;

class Animal { // 실습 25.
private:
	string move;
	string name;
	int age;

public:
	void what_animal() {
		cin >> name >> age;
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}

	void Move(string _move) {
		cout << name << "이(가) " << _move << "로 이동합니다." << endl;
	}
	void Feed() {
		cout << name << "은(는) 먹이를 먹습니다." << endl;
	}

};

class Cat : public Animal {
private:
	string move;
public:

	Cat() {
		cout << "==고양이 정보==" << endl;
		cout << "고양이의 이름과 나이를 입력하시오. : ";
	}
	void c_move() {
		move = "두 발";
		Move(move);
	}


};
class Bird : public Animal {
private:
	string move;
public:

	Bird() {
		cout << "==새 정보==" << endl;
		cout << "새의 이름과 나이를 입력하시오. : ";
	}
	void b_move() {
		move = "두 날개";
		Move(move);
	}

};

class Character {
private:
	string name;
	int level;
	int item_num;

public:
	Character() // 캐릭터 생성
	{
		cout << "이름을 입력해주세요 : ";
		cin >> name;
		cout << name << " 캐릭터가 생성되었습니다." << endl;
		level = 0;
		item_num = 0;
	}
	void info() { // 실행할 동작 입력
		cout << "어떤 동작을 실행하시겠습니까? (0: 종료) ";	
	}
	void new_name() { // 새 이름 입력
		cout << "새 이름을 입력해주세요 : ";
		cin >> name;
		cout << "이름이 변경되었습니다." << endl;
		cout << "new name : " << name << endl;
		level = 0;
		item_num = 0;
	}
	void level_up() { // 레벨 업
		level++;
		cout << "레벨업!" << endl;
		cout << "현재 레벨 : " << level << endl;
	}
	void item_up() { // 아이템 업
		item_num++;
		cout << "아이템을 얻었습니다!" << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
	void item_down() { // 아이템 다운
		item_num--;
		cout << "아이템을 사용했습니다!" << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
	void user_info() { // 유저 상태
		cout << "이름 : " << name << endl;
		cout << "레벨 : " << level << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
	~Character() { // 소멸자.
		cout << "게임 종료...";
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
			cout << "잘못된입력입니다."<<endl;
	}	}


	// 실습 25
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