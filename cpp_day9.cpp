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
// ���࿡ return���� �ִ� �Լ��� ������ �ϰ�,
// ���� �����ؼ� �޴´ٸ�, �ٲ� �� �ִ�.

void callByReference(int& _a, int& _b) {
	_a = 20;
	_b = 10;

	cout << "callByReference : " << _a <<  " " << _b << endl;
}
// �ǽ�30. ���� ������ �����غ���
void num_input(int &num1, int &num2, int &inc_num) {
	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
	cin >> num1;

	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
	cin >> num2;

	cout << "���� ������ų Ƚ���� �Է��ϼ��� : ";
	cin >> inc_num;

	cout << "�Էµ� �� : ù��° ���� : " << num1 << ", �ι�° ���� : " << num2 << ", ���� Ƚ�� : " << inc_num << endl << endl;;
}

void inc_val(int& val1, int& val2, int &inc_val) {

	
	
	for (int i = 0; i < inc_val; i++)
	{
		val1 += 1;
		val2 += 1;
		cout << "���� " << i + 1 << " ȸ��" << endl;
		cout << "���� �� -> ù��° ���� : " << val1 << ", �ι�° ���� : " << val2 << endl;
		cout << "�� ������ �� :  " << val1 + val2 << endl;
	
		cout << endl;
	}
}

// ���սǽ�9. �������� �迭 �Ҵ� �� �Է��ϱ�
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
		
		cout << "�ʱ� �迭 ũ�� ���� : ";
		cin >> x;
		
		arr = new int[x];
		cout << "�迭�� ũ�⸦ " << x << "�� �ʱ�ȭ�߽��ϴ�." << endl;

		for (int i = 0; i < x; i++) {
			arr[i] = 1;
		}
		
	}
	void menu() {
		cout << endl << "1: ���� �迭 ���" << endl;
		cout << "2: �迭�� ��� �߰�" << endl;
		cout << "3: �迭�� ������ ��� ����" << endl;
		cout << "0: ����" << endl;
		cout << "����� �Է��ϼ��� : ";
		cin >> user_input;
	}

	void print_arr() {
		cout << endl << "���� �迭 : ";
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

		cout << "�߰��� ���� �����ϼ��� : ";
		cin >> num;
		cout << "��" << num <<"�� �迭�� �߰��߽��ϴ�. " << endl;


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
		cout << "���α׷� ����" << endl;
	}
};

int main() {
	dyn_arr d_a;

	d_a.loop();
	

	
	// �ǽ�30. ���� ������ �����غ���
	/*
	int num1 = 0, num2 = 0, inc_num = 0;

	num_input(num1, num2, inc_num);
	inc_val(num1, num2, inc_num);
	*/
	
	/*
	int x = 10;
	int y = 30;

	cout << "x + y : " << x << " " <<  y << endl;
	callByValue(x, y); // ���� ������ ���� �ٲ��� �ʴ´�.

	callByReference(x, y); // �ּҰ����� �����ϱ� ������, ���� ������ ���� �ٲ� �� �ִ�.

	cout << "x, y : " << x << " " << y << endl;

	*/


	return 0;
}


#endif