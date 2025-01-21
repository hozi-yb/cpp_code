#include <iostream>
#include <string>

//#define MAIN6

#ifdef MAIN6

using namespace std;

int sensor_cal(int sensor_val, int offset) // offset : ���ϰų� ���� ��
{
	int result = 0;

	result = sensor_val - offset;


	return result;
}

void motor_speed(int motor_num, int speed)
{
	cout << motor_num << "�� ���͸� " << speed << " �ӵ��� �۵�!" << endl;
	return;
}

void sub_str(int n, int k)
{
	cout << n << " ��° ����" << k << " �� �ڸ���.";
}
void sub_str(int n) // �Լ��� ���� �̸�������, �Ű������� �ٸ���, �ٸ� �Լ��� �ν��� �Ѵ�.
{
	cout << n << " ��° ������";
}

void number_check(int num)
{
	if (num % 2 == 0)
	{
		cout << "¦��" << endl;
	}
	else
	{
		cout << "Ȧ��" << endl;
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
	float divide = (float)n1 / n2; // ���� ����ȯ, �ϳ��� �س��� �ٸ� �Ϳ� ������ �ȴ�.
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
			cout << "���� ��°� : " << val << endl;
		}
};
void CalClass::inc_val(int num) // �ۿ����� �̷��� �������� �� �ִ�.
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
		cout << "����1, ������(+ - * /), ����2�� �Է��ϼ��� : ";
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
	// 0 ���� ���� �� ���� ����.
	// ���ѷ����� ����������.
	// ��ǻ�ʹ� +����ۿ� �� �� ���µ�,
	// 0���δ� �ƹ��� ���� �״���̱� ������, ���ѷ����� ����������.

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

class testClass { // ������ ������.
private:

public:
	testClass(int num1) { // Ŭ������ ���۵� ��, ó������ ����ȴ�.
		cout << "������1 ȣ�� �Ǿ����ϴ�." << num1 << endl;
	}
	testClass(int num2, int num3) { // �����ڵ� �Լ� �����ε��� �����ϴ�!!!!!!!!!!!!!!!!!!!!!!!
		cout << "������2 ȣ��" << num2 << " ,  " << num3 << endl;
	}
	~testClass() { // ����ǥ�� �ٿ��ش�. Ŭ������ ������ ȣ��ȴ�.
		cout << "�Ҹ��ڰ� ȣ�� �Ǿ����ϴ�." << endl;
		// � �� ����?? �޸� ������ ���� ���ؼ� �Ҹ��ڿ��� �޸� �Ҵ��� �����ϴµ� ����Ѵ�.

		// �Ҹ��ڴ� �����ε��� �� �� ����.
		// �Ű����� �ִ°� ��ü�� �ȵȴ�~
	}
};


class test23Class
{
private:
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

public:
	test23Class() {
		cout << "������!" << endl;
		for (int i = 0; i <= 9; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	~test23Class() {
		cout << "�Ҹ���!" << endl;
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
		cout << "�ؾ ����� ����!!" << endl;
	}
	void order()
	{
		cout << "� ���� �������? : " << endl;
		cin >> inside;
		cout << "�� ���� ������ �󸶷� �ұ�� : " << endl;
		cin >> price;
		cout << "�� ���� ������ : " << endl;
		cin >> pcs;
		
	}
	void print() {
		cout << "+++�ؾ ����+++" << endl;
		cout << "����� : " << inside << endl;
		cout << "���� : " << pcs << endl;
		cout << "�� ���� : " << price * pcs << endl;
	}

	~boong_eo() {
		cout << inside << "�ؾ ����� ��!" << endl;
		cout << "+++++++++++++++++" << endl;
	}

};

void main() 
{
	boong_eo boong;
	boong.order();
	boong.print();


	//test23Class test;



	//testClass tC1; // �����ڸ� �����, Ŭ���� ��ü�� ������ �ɶ� �ڵ����� �����̵ȴ�.
	//testClass tC1(1), tC2(2, 3); // �Լ� �����ε����� �����ڸ� �ٸ��� ����� �� �ִ�.



	/* �ǽ� ���� 22

	CalcClass calc;

	for (int i = 0; i < 3; i++)
	{
		calc.calc_info();
		calc.print_calc();
	}
	*/





	// Ŭ����
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







	// ���սǽ� 5
	/*
	Student student[3];
	
	float avg[3] = {};
	for (int i = 0; i < 3; i++)
	{
		float sum = 0;

		cout << i+1 << "�� �л��� �̸��� �Է��ϼ���. : ";
		cin >> student[i].name;

		cout << student[i].name << "�� 3���� ������ �Է��ϼ��� : ";
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
		cout << student[k].name << "�� ������� :" << avg[k] << endl;
		
		if (avg[k] > first_avg)
		{
			first_avg = avg[k];
			first_name = student[k].name;
		}
		
	}
	cout << "1�� : " << first_name << " (��� ���� : " << first_avg << ")";
	*/

	/*
	cout << sensor_cal(50, 5) << endl;

	motor_speed(1, 1000);
	*/

	// �ǽ� 21-1
	/*
	number_check(5);
	cout << endl;
	number_check(2);
	cout << endl;


	// �ǽ� 21-2
	cout << biggest_num(3, 2, 1) << endl;
	*/









	return ; // void ���ϰ��� ����.
}

#endif


// ���������� ���� ������ ����� ����??
// python�� �������� �����ϴµ�,
// c++�� �ѹ��� �˻��� �� �ѹ��� ����ȴ�.