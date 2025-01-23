#include <iostream>
#include <string>

// callByValue



//#define MAIN9

#ifdef MAIN9

using namespace std;

void callByValue(int a, int b) {
	a = 100;
	b = 50;

	cout << "callByValue : " << a << " " << b << endl;
}
// 만약에 return값이 있는 함수로 선언을 하고,
// 값을 리턴해서 받는다면, 바뀔 수 있다.

void callByReference(int& _a, int& _b) {
	_a = 20;
	_b = 10;

	cout << "callByReference : " << _a <<  " " << _b << endl;
}
// 실습30. 원본 데이터 변경해보기
void num_input(int &num1, int &num2, int &inc_num) {
	cout << "첫 번째 숫자를 입력하세요 : ";
	cin >> num1;

	cout << "두 번째 숫자를 입력하세요 : ";
	cin >> num2;

	cout << "값을 증가시킬 횟수를 입력하세요 : ";
	cin >> inc_num;

	cout << "입력된 값 : 첫번째 숫자 : " << num1 << ", 두번째 숫자 : " << num2 << ", 증가 횟수 : " << inc_num << endl << endl;;
}

void inc_val(int& val1, int& val2, int &inc_val) {

	
	
	for (int i = 0; i < inc_val; i++)
	{
		val1 += 1;
		val2 += 1;
		cout << "증가 " << i + 1 << " 회차" << endl;
		cout << "현재 값 -> 첫번째 숫자 : " << val1 << ", 두번째 숫자 : " << val2 << endl;
		cout << "두 숫자의 합 :  " << val1 + val2 << endl;
	
		cout << endl;
	}
}

// 종합실습9. 동적으로 배열 할당 후 입력하기
class dyn_arr {
private:
	int x = 0;
	int* arr;
	int* new_arr;
	int user_input = 0;
	int num = 0;
	bool flag = true;
public:
	dyn_arr()
	{
		
		cout << "초기 배열 크기 지정 : ";
		cin >> x;
		
		arr = new int[x];
		cout << "배열의 크기를 " << x << "로 초기화했습니다." << endl;

		for (int i = 0; i < x; i++) {
			arr[i] = 1;
		}
		
	}
	void menu() {
		cout << endl << "1: 현재 배열 출력" << endl;
		cout << "2: 배열에 요소 추가" << endl;
		cout << "3: 배열의 마지막 요소 삭제" << endl;
		cout << "0: 종료" << endl;
		cout << "명령을 입력하세요 : ";
		cin >> user_input;
	}

	void print_arr() {
		cout << endl << "현재 배열 : ";
		for (int i = 0; i < x; i++) {
			cout << arr[i] << " ";	
		}
		cout << endl;
	}
	void add_arr() {

		new_arr = new int[x+1];

		for (int i = 0; i < x; i++) {
			new_arr[i] = arr[i];
		}
		x += 1;
		
		delete[] arr;		
		arr = new_arr;

		cout << "추가할 값을 지정하세요 : ";
		cin >> num;
		cout << "값" << num <<"을 배열에 추가했습니다. " << endl;


		arr[x-1] = num;
	}
	void remove_arr() {
		x--;

		new_arr = new int[x];

		for (int i = 0; i < x; i++) {
			new_arr = arr;
		}
		delete[] arr;
		arr = new_arr;

		for (int i = 0; i < x; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	void loop() {
		while (flag) {
			menu();
			switch (user_input) {
			case 1:
				print_arr();
				break;

			case 2:
				add_arr();
				break;
			case 3:
				remove_arr();
				break;
			case 0:
				flag = false;
				break;
			}
		}

		
	}
	~dyn_arr() { 
		delete[] arr;
		cout << "프로그램 종료" << endl;
	}
};

int main() {
	dyn_arr d_a;

	d_a.loop();
	

	
	// 실습30. 원본 데이터 변경해보기
	/*
	int num1 = 0, num2 = 0, inc_num = 0;

	num_input(num1, num2, inc_num);
	inc_val(num1, num2, inc_num);
	*/
	
	/*
	int x = 10;
	int y = 30;

	cout << "x + y : " << x << " " <<  y << endl;
	callByValue(x, y); // 기존 변수의 값을 바꾸지 않는다.

	callByReference(x, y); // 주소값으로 접근하기 때문에, 기존 변수의 값을 바꿀 수 있다.

	cout << "x, y : " << x << " " << y << endl;

	*/


	return 0;
}


#endif