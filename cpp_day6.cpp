#include <iostream>
#include <string>

//#define MAIN6

#ifdef MAIN6

using namespace std;

int sensor_cal(int sensor_val, int offset) // offset : 더하거나 빼는 값
{
	int result = 0;

	result = sensor_val - offset;


	return result;
}

void motor_speed(int motor_num, int speed)
{
	cout << motor_num << "번 모터를 " << speed << " 속도로 작동!" << endl;
	return;
}

void sub_str(int n, int k)
{
	cout << n << " 번째 부터" << k << " 개 자른다.";
}
void sub_str(int n) // 함수가 같은 이름이지만, 매개변수가 다르면, 다른 함수로 인식을 한다.
{
	cout << n << " 번째 까지만";
}

void number_check(int num)
{
	if (num % 2 == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수" << endl;
	}

	return ;
}

int biggest_num(int num1, int num2, int num3)
{
	int max = 0;
	
	if (num1 > max) max = num1;
	if (num2 > max) max = num2;
	if (num3 > max) max = num3;

	return max;
}

struct Student
{
	string name;
	float scores[3];
};

int add_num(int n1, int n2)
{
	int sum = n1 + n2;
	return sum;
}
int sub_num(int n1, int n2)
{
	int sub = 0;

	if (n1 > n2) sub = n1 - n2;
	else sub = n2 - n1;
	return sub;
}
int mul_num(int n1, int n2)
{
	int mul = n1 * n2;
	return mul;
}
float divide_num(int n1, int n2)
{
	float divide = (float)n1 / n2; // 강제 형변환, 하나만 해놔도 다른 것에 적용이 된다.
	return divide;
}
/*
class CalClass {
	private:
		int val;

	public:
		void set_val(int num)
		{
			val = num;
		}
		void inc_val(int num);

		void dec_val(int num)
		{
			val = val - num;
		}
		void print_val()
		{
			cout << "최종 출력값 : " << val << endl;
		}
};
void CalClass::inc_val(int num) // 밖에서도 이렇게 정의해줄 수 있다.
{
	val = val + num;
}
*/

class CalcClass {
private:
	char cal;
	int num1;
	int num2;
	int val;

public:
	void calc_info()
	{
		cout << "숫자1, 연산자(+ - * /), 숫자2를 입력하세요 : ";
		cin >> num1 >> cal >> num2;

		switch (cal)
		{
		case '+': 
			add_calc();
			break;

		case '-':
			sub_calc();
			break;
		case '*':
			mul_calc();
			break;
		case '/':
			divide_calc();
			break;
		}
	}
	// 0 으로 나눌 수 없는 이유.
	// 무한루프에 빠져버린다.
	// 컴퓨터는 +연산밖에 할 수 없는데,
	// 0으로는 아무리 빼도 그대로이기 때문에, 무한루프에 빠져버린다.

	void add_calc()
	{
		val = num1 + num2;
	}
	void sub_calc()
	{
		val = num1 - num2;
	}
	void mul_calc()
	{
		val = num1 * num2;
	}
	void divide_calc()
	{
		val = num1 / num2;
	}

	void print_calc()
	{
		cout << num1 << cal << num2 << " = " << val << endl;
	}


};

class testClass { // 생성자 만들어보기.
private:

public:
	testClass(int num1) { // 클래스가 시작될 때, 처음으로 실행된다.
		cout << "생성자1 호출 되었습니다." << num1 << endl;
	}
	testClass(int num2, int num3) { // 생성자도 함수 오버로딩이 가능하다!!!!!!!!!!!!!!!!!!!!!!!
		cout << "생성자2 호출" << num2 << " ,  " << num3 << endl;
	}
	~testClass() { // 물결표를 붙여준다. 클래스가 끝날때 호출된다.
		cout << "소멸자가 호출 되었습니다." << endl;
		// 어떨 때 쓰냐?? 메모리 누수를 막기 위해서 소멸자에서 메모리 할당을 해제하는데 사용한다.

		// 소멸자는 오버로딩을 할 수 없다.
		// 매개변수 넣는거 자체가 안된다~
	}
};


class test23Class
{
private:
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

public:
	test23Class() {
		cout << "생성자!" << endl;
		for (int i = 0; i <= 9; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	~test23Class() {
		cout << "소멸자!" << endl;
		for (int j = 9; j >= 0; j--)
			cout << arr[j] << " ";
		cout << endl;
	}
};

class boong_eo
{
private:
	string inside;
	int price;
	int pcs;

public:
	boong_eo() {
		cout << "붕어빵 만들기 시작!!" << endl;
	}
	void order()
	{
		cout << "어떤 속을 넣을까요? : " << endl;
		cin >> inside;
		cout << "한 개의 가격은 얼마로 할까요 : " << endl;
		cin >> price;
		cout << "몇 개를 만들까요 : " << endl;
		cin >> pcs;
		
	}
	void print() {
		cout << "+++붕어빵 정보+++" << endl;
		cout << "속재료 : " << inside << endl;
		cout << "갯수 : " << pcs << endl;
		cout << "총 가격 : " << price * pcs << endl;
	}

	~boong_eo() {
		cout << inside << "붕어빵 만들기 끝!" << endl;
		cout << "+++++++++++++++++" << endl;
	}

};

void main() 
{
	boong_eo boong;
	boong.order();
	boong.print();


	//test23Class test;



	//testClass tC1; // 생성자를 만들면, 클래스 객체가 생성이 될때 자동으로 실행이된다.
	//testClass tC1(1), tC2(2, 3); // 함수 오버로딩으로 생성자를 다르게 사용할 수 있다.



	/* 실습 예제 22

	CalcClass calc;

	for (int i = 0; i < 3; i++)
	{
		calc.calc_info();
		calc.print_calc();
	}
	*/





	// 클래스
	/*
	CalClass cc1, cc2;

	cc1.set_val(3);
	cc1.inc_val(3);
	cc1.print_val();

	cc1.dec_val(2);
	cc1.print_val();
	*/





	/*
	int num1 = 80;
	int num2 = 30;

	cout << add_num(num1, num2) << endl;
	cout << sub_num(num1, num2) << endl;
	cout << mul_num(num1, num2) << endl;
	cout << divide_num(num1, num2) << endl;
	*/







	// 종합실습 5
	/*
	Student student[3];
	
	float avg[3] = {};
	for (int i = 0; i < 3; i++)
	{
		float sum = 0;

		cout << i+1 << "번 학생의 이름을 입력하세요. : ";
		cin >> student[i].name;

		cout << student[i].name << "의 3과목 점수를 입력하세요 : ";
		for (int j = 0; j < 3; j++)
		{
			cin >> student[i].scores[j];
			sum += student[i].scores[j];
		}

		avg[i] = sum/3;

	}

	string first_name = "";
	float first_avg = 0;
	for (int k = 0; k < 3; k++)
	{
		cout << student[k].name << "의 평균점수 :" << avg[k] << endl;
		
		if (avg[k] > first_avg)
		{
			first_avg = avg[k];
			first_name = student[k].name;
		}
		
	}
	cout << "1등 : " << first_name << " (평균 점수 : " << first_avg << ")";
	*/

	/*
	cout << sensor_cal(50, 5) << endl;

	motor_speed(1, 1000);
	*/

	// 실습 21-1
	/*
	number_check(5);
	cout << endl;
	number_check(2);
	cout << endl;


	// 실습 21-2
	cout << biggest_num(3, 2, 1) << endl;
	*/









	return ; // void 리턴값이 없음.
}

#endif


// 인터프리터 언어와 컴파일 언어의 차이??
// python은 한줄한줄 실행하는데,
// c++은 한번에 검사한 수 한번에 실행된다.